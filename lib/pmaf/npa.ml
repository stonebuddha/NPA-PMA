open Core
open Sig

type stat =
  { solve_time : float
  ; solve_iters : int
  }
[@@deriving to_yojson]

let pp_stat fmt { solve_time; solve_iters } =
  Format.fprintf fmt "solve time: %gs, solve iters: %d" solve_time solve_iters
;;

exception Solver_error

module Make (S : SYMBOL) = struct
  include Syntax.Make (S)

  module Fix (D : DOMAIN) = struct
    let fix ~verbose ~init f =
      let rec iter cnt last =
        let next = f last in
        if D.equal last next
        then (
          if verbose then Format.eprintf "[INFO] inner fixed point %d round(s)@." (cnt + 1);
          last)
        else iter (cnt + 1) next
      in
      iter 0 init
    ;;

    let fix_list ~verbose ~init f =
      let rec iter cnt last =
        let next = f last in
        if List.for_all2_exn ~f:D.equal last next
        then (
          if verbose then Format.eprintf "[INFO] inner fixed point %d round(s)@." (cnt + 1);
          last)
        else iter (cnt + 1) next
      in
      iter 0 init
    ;;
  end

  module Interp0 (D : DOMAIN) = struct
    type t0 = (D.t, D.tst, D.flt, D.t) texp0

    module F = Fix (D)

    let f ~verbose (nu : D.t S.Map.t) (t : t0) : D.t =
      let rec aux env t =
        if not (is_dirty_texp0 t)
        then Option.value_exn t.texp_value
        else (
          let value =
            match t.texp_desc with
            | T0_term c -> c
            | T0_seq (c, t0) -> D.extend c (aux env t0)
            | T0_call (x, t0) -> D.extend (S.Map.find_exn nu x) (aux env t0)
            | T0_cond (phi, t1, t2) -> D.cond_combine phi (aux env t1) (aux env t2)
            | T0_prob (prb, t1, t2) -> D.prob_combine prb (aux env t1) (aux env t2)
            | T0_ndet (t1, t2) -> D.ndet_combine (aux env t1) (aux env t2)
            | T0_hole x -> S.Map.find_exn env x
            | T0_concat (t1, x, t2) -> aux (S.Map.set env ~key:x ~data:(aux env t2)) t1
            | T0_inf_closure (t0, x) ->
              F.fix ~verbose ~init:D.zero (fun v ->
                  mark_dirty_texp0 (S.Set.singleton x) t0;
                  aux (S.Map.set env ~key:x ~data:v) t0)
          in
          t.texp_value <- Some value;
          value)
      in
      mark_dirty_texp0 S.Set.empty t;
      aux S.Map.empty t
    ;;
  end

  module Interp0_symbolic (D : DOMAIN_SYMBOLIC) = struct
    type t0 = (D.t, D.tst, D.flt, D.t_symbolic) texp0
    type t0_non_symbolic = (D.t, D.tst, D.flt, D.t) texp0

    module type AUX =
      DOMAIN_SYMBOLIC_AUX
        with type t = D.t_symbolic
         and type tst = D.tst
         and type flt = D.flt
         and type t_non_symbolic := D.t_non_symbolic
         and type t_symbolic := D.t_symbolic

    let f (ds : (module AUX)) (nu : D.t_symbolic S.Map.t) (t : t0) : D.t_symbolic =
      let module DS = (val ds : AUX) in
      let rec aux env t =
        if not (is_dirty_texp0 t)
        then Option.value_exn t.texp_value
        else (
          let value =
            match t.texp_desc with
            | T0_term c -> DS.embed c
            | T0_seq (c, t0) -> DS.extend (DS.embed c) (aux env t0)
            | T0_call (x, t0) -> DS.extend (S.Map.find_exn nu x) (aux env t0)
            | T0_cond (phi, t1, t2) -> DS.cond_combine phi (aux env t1) (aux env t2)
            | T0_prob (prb, t1, t2) -> DS.prob_combine prb (aux env t1) (aux env t2)
            | T0_ndet (t1, t2) -> DS.ndet_combine (aux env t1) (aux env t2)
            | T0_hole x -> S.Map.find_exn env x
            | T0_concat (t1, x, t2) -> aux (S.Map.set env ~key:x ~data:(aux env t2)) t1
            | T0_inf_closure (t0, x) ->
              let v_symbolic = DS.fresh () in
              let v_symbolic' = aux (S.Map.set env ~key:x ~data:v_symbolic) t0 in
              DS.equalize v_symbolic v_symbolic';
              v_symbolic
          in
          t.texp_value <- Some value;
          value)
      in
      mark_dirty_texp0 S.Set.empty t;
      aux S.Map.empty t
    ;;

    let f_non_symbolic ~verbose (ds : (module AUX)) (nu : D.t S.Map.t) (t : t0_non_symbolic) : D.t =
      let module DS = (val ds : AUX) in
      let callbacks = ref [] in
      let rec aux env t t' =
        if not (is_dirty_texp0 t)
        then DS.embed (Option.value_exn t.texp_value)
        else if not (is_dirty_texp0 t')
        then Option.value_exn t'.texp_value
        else (
          let value =
            match t.texp_desc, t'.texp_desc with
            | T0_term c, T0_term _ -> DS.embed c
            | T0_seq (c, t0), T0_seq (_, t0') -> DS.extend (DS.embed c) (aux env t0 t0')
            | T0_call (x, t0), T0_call (_, t0') -> DS.extend (DS.embed (S.Map.find_exn nu x)) (aux env t0 t0')
            | T0_cond (phi, t1, t2), T0_cond (_, t1', t2') -> DS.cond_combine phi (aux env t1 t1') (aux env t2 t2')
            | T0_prob (prb, t1, t2), T0_prob (_, t1', t2') -> DS.prob_combine prb (aux env t1 t1') (aux env t2 t2')
            | T0_ndet (t1, t2), T0_ndet (t1', t2') -> DS.ndet_combine (aux env t1 t1') (aux env t2 t2')
            | T0_hole x, T0_hole _ -> S.Map.find_exn env x
            | T0_concat (t1, x, t2), T0_concat (t1', _, t2') -> aux (S.Map.set env ~key:x ~data:(aux env t2 t2')) t1 t1'
            | T0_inf_closure (t0, x), T0_inf_closure (t0', _) ->
              let v_symbolic = DS.fresh () in
              let v_symbolic' = aux (S.Map.set env ~key:x ~data:v_symbolic) t0 t0' in
              DS.equalize v_symbolic v_symbolic';
              v_symbolic
            | _ -> assert false
          in
          t'.texp_value <- Some value;
          callbacks := (fun () -> t.texp_value <- Some (DS.inst value)) :: !callbacks;
          value)
      in
      mark_dirty_texp0 S.Set.empty t;
      let t' = unmasked_copy_texp0 t in
      let v_symbolic = aux S.Map.empty t t' in
      if not (DS.solve ~verbose [ v_symbolic ]) then raise Solver_error;
      List.iter !callbacks ~f:(fun f -> f ());
      Option.value_exn t.texp_value
    ;;
  end

  module Interp1 (D : DOMAIN) = struct
    type t1 = (D.t, D.tst, D.flt, D.t) texp1

    module F = Fix (D)

    let f ~verbose (nu : D.t S.Map.t) (t : t1) : D.t =
      let rec aux env t =
        if not (is_dirty_texp1 t)
        then Option.value_exn t.texp_value
        else (
          let value =
            match t.texp_desc with
            | T1_term c -> c
            | T1_seq (c, t0) -> D.extend c (aux env t0)
            | T1_call (x, c) -> D.extend (S.Map.find_exn nu x) c
            | T1_cond (phi, t1, t2) -> D.cond_combine phi (aux env t1) (aux env t2)
            | T1_prob (prb, t1, t2) -> D.prob_combine prb (aux env t1) (aux env t2)
            | T1_ndet (t1, t2) -> D.ndet_combine (aux env t1) (aux env t2)
            | T1_hole x -> S.Map.find_exn env x
            | T1_concat (t1, x, t2) -> aux (S.Map.set env ~key:x ~data:(aux env t2)) t1
            | T1_inf_closure (t0, x) ->
              F.fix ~verbose ~init:D.zero (fun v ->
                  mark_dirty_texp1 (S.Set.singleton x) t0;
                  aux (S.Map.set env ~key:x ~data:v) t0)
            | T1_add (t1, t2) -> D.combine (aux env t1) (aux env t2)
            | T1_sub (t1, t2) -> D.subtract (aux env t1) (aux env t2)
          in
          t.texp_value <- Some value;
          value)
      in
      mark_dirty_texp1 S.Set.empty t;
      aux S.Map.empty t
    ;;
  end

  module Interp1_symbolic (D : DOMAIN_SYMBOLIC) = struct
    type t1 = (D.t, D.tst, D.flt, D.t_symbolic) texp1

    module type AUX =
      DOMAIN_SYMBOLIC_AUX
        with type t = D.t_symbolic
         and type tst = D.tst
         and type flt = D.flt
         and type t_non_symbolic := D.t_non_symbolic
         and type t_symbolic := D.t_symbolic

    let f (ds : (module AUX)) (nu : D.t_symbolic S.Map.t) (t : t1) : D.t_symbolic =
      let module DS = (val ds : AUX) in
      let rec aux env t =
        if not (is_dirty_texp1 t)
        then Option.value_exn t.texp_value
        else (
          let value =
            match t.texp_desc with
            | T1_term c -> DS.embed c
            | T1_seq (c, t0) -> DS.extend (DS.embed c) (aux env t0)
            | T1_call (x, c) -> DS.extend_lin (S.Map.find_exn nu x) (DS.embed c)
            | T1_cond (phi, t1, t2) -> DS.cond_combine phi (aux env t1) (aux env t2)
            | T1_prob (prb, t1, t2) -> DS.prob_combine prb (aux env t1) (aux env t2)
            | T1_ndet (t1, t2) -> DS.ndet_combine (aux env t1) (aux env t2)
            | T1_hole x -> S.Map.find_exn env x
            | T1_concat (t1, x, t2) -> aux (S.Map.set env ~key:x ~data:(aux env t2)) t1
            | T1_inf_closure (t0, x) ->
              let v_symbolic = DS.fresh () in
              let v_symbolic' = aux (S.Map.set env ~key:x ~data:v_symbolic) t0 in
              DS.equalize v_symbolic v_symbolic';
              v_symbolic
            | T1_add (t1, t2) -> DS.combine (aux env t1) (aux env t2)
            | T1_sub (t1, t2) -> DS.subtract (aux env t1) (aux env t2)
          in
          t.texp_value <- Some value;
          value)
      in
      mark_dirty_texp1 S.Set.empty t;
      aux S.Map.empty t
    ;;
  end

  module Differential (D : sig
    type t
    type tst
    type flt

    val zero : t
    val is_idempotent : bool
  end) =
  struct
    type 'mem0 t0 = (D.t, D.tst, D.flt, 'mem0) texp0
    type 'mem1 t1 = (D.t, D.tst, D.flt, 'mem1) texp1

    let f (nu : D.t S.Map.t) (t : D.t t0) : 'mem1 t1 =
      let rec aux t t' =
        if not (is_dirty_texp0 t')
        then Option.value_exn t'.texp_value
        else (
          let value =
            match t.texp_desc, t'.texp_desc with
            | T0_term _, T0_term _ -> t1_term D.zero
            | T0_seq (c, t0), T0_seq (_, t0') -> t1_seq (c, aux t0 t0')
            | T0_call (x, t0), T0_call (_, t0') ->
              t1_add (t1_seq (S.Map.find_exn nu x, aux t0 t0'), t1_call (x, Option.value_exn t0.texp_value))
            | T0_cond (phi, t1, t2), T0_cond (_, t1', t2') -> t1_cond (phi, aux t1 t1', aux t2 t2')
            | T0_prob (prb, t1, t2), T0_prob (_, t1', t2') -> t1_prob (prb, aux t1 t1', aux t2 t2')
            | T0_ndet (t1, t2), T0_ndet (t1', t2') ->
              if D.is_idempotent
              then
                t1_ndet
                  ( t1_add (t1_term (Option.value_exn t1.texp_value), aux t1 t1')
                  , t1_add (t1_term (Option.value_exn t2.texp_value), aux t2 t2') )
              else
                t1_sub
                  ( t1_ndet
                      ( t1_add (t1_term (Option.value_exn t1.texp_value), aux t1 t1')
                      , t1_add (t1_term (Option.value_exn t2.texp_value), aux t2 t2') )
                  , t1_term (Option.value_exn t.texp_value) )
            | T0_hole x, T0_hole _ -> t1_hole x
            | T0_concat (t1, x, t2), T0_concat (t1', _, t2') -> t1_concat (aux t1 t1', x, aux t2 t2')
            | T0_inf_closure (t0, x), T0_inf_closure (t0', _) -> t1_inf_closure (aux t0 t0', x)
            | _ -> assert false
          in
          t'.texp_value <- Some value;
          value)
      in
      let t' = unmasked_copy_texp0 t in
      aux t t'
    ;;
  end

  module Make_solver (D : sig
    type t [@@deriving equal]
    type tst
    type flt

    val pp : Format.formatter -> t -> unit
    val zero : t
  end) (N : sig
    val iter : verbose:bool -> (S.t * (D.t, D.tst, D.flt, D.t) texp0) list -> (S.t * D.t) list -> (S.t * D.t) list
  end) =
  struct
    type t0 = (D.t, D.tst, D.flt, D.t) texp0

    let f ?(max_iter : int option) ~verbose (eqns : (S.t * t0) list) : (S.t * D.t) list * stat =
      let rec iter cnt last =
        match max_iter with
        | Some max_iter when cnt >= max_iter ->
          if verbose then Format.eprintf "[WARN] reached maximum iterations@.";
          last, cnt
        | _ ->
          let next = N.iter ~verbose eqns last in
          if verbose
          then (
            Format.eprintf "[INFO] iteration %d:" (cnt + 1);
            List.iter (List.take next 10) ~f:(fun (x, rhs) -> Format.eprintf " %a = %a" S.pp x D.pp rhs);
            Format.eprintf "@.");
          let converged = List.for_all2_exn last next ~f:(fun (_, old) (_, cur) -> D.equal old cur) in
          if converged
          then (
            if verbose then Format.printf "[INFO] converged in %d iteration(s)@." (cnt + 1);
            last, cnt + 1)
          else iter (cnt + 1) next
      in
      let (res, solve_iters), solve_time =
        Timer.wrap_duration ~f:(fun () ->
            let initial = List.map eqns ~f:(fun (x, _) -> x, D.zero) in
            iter 0 initial)
      in
      res, { solve_time = Time_ns.Span.to_sec solve_time; solve_iters }
    ;;
  end

  module Kleene (D : DOMAIN) =
    Make_solver
      (D)
      (struct
        type t0 = (D.t, D.tst, D.flt, D.t) texp0

        module I0 = Interp0 (D)

        let iter ~verbose (eqns : (S.t * t0) list) (binds : (S.t * D.t) list) : (S.t * D.t) list =
          let nu = S.Map.of_alist_exn binds in
          List.map eqns ~f:(fun (x, rhs) -> x, I0.f ~verbose nu rhs)
        ;;
      end)

  module Newton (D : DOMAIN) =
    Make_solver
      (D)
      (struct
        type t0 = (D.t, D.tst, D.flt, D.t) texp0

        module Diff = Differential (D)
        module I0 = Interp0 (D)
        module I1 = Interp1 (D)

        let iter ~verbose (eqns : (S.t * t0) list) (binds : (S.t * D.t) list) : (S.t * D.t) list =
          let nu = S.Map.of_alist_exn binds in
          let after_diff =
            List.map eqns ~f:(fun (x, rhs) ->
                let v = I0.f ~verbose nu rhs in
                if D.is_idempotent
                then x, t1_add (t1_term v, Diff.f nu rhs)
                else x, t1_add (t1_term (D.subtract v (S.Map.find_exn nu x)), Diff.f nu rhs))
          in
          let delta =
            List.map2_exn
              ~f:(fun (x, _) v -> x, v)
              after_diff
              (I1.F.fix_list
                 ~verbose
                 ~init:(List.map after_diff ~f:(fun _ -> D.zero))
                 (fun sol ->
                   let nu = S.Map.of_alist_exn (List.map2_exn after_diff sol ~f:(fun (x, _) v -> x, v)) in
                   List.map after_diff ~f:(fun (_, rhs) -> I1.f ~verbose nu rhs)))
          in
          List.map2_exn binds delta ~f:(fun (_, old) (x, rhs) -> x, if D.is_idempotent then rhs else D.combine old rhs)
        ;;
      end)

  module Newton_symbolic (D : DOMAIN_SYMBOLIC) =
    Make_solver
      (D)
      (struct
        type t0 = (D.t, D.tst, D.flt, D.t) texp0

        module Diff = Differential (D)
        module I0 = Interp0_symbolic (D)
        module I1 = Interp1_symbolic (D)

        let iter ~verbose (eqns : (S.t * t0) list) (binds : (S.t * D.t) list) : (S.t * D.t) list =
          let nu = S.Map.of_alist_exn binds in
          let after_diff =
            List.map eqns ~f:(fun (x, rhs) ->
                let module DS =
                  D.Symbolic (struct
                    let man = D.create_manager ()
                  end)
                in
                let v = I0.f_non_symbolic ~verbose (module DS) nu rhs in
                if D.is_idempotent
                then x, t1_add (t1_term v, Diff.f nu rhs)
                else x, t1_add (t1_term (D.subtract v (S.Map.find_exn nu x)), Diff.f nu rhs))
          in
          let module DS =
            D.Symbolic (struct
              let man = D.create_manager ()
            end)
          in
          let v_symbolics = List.map after_diff ~f:(fun (x, _) -> x, DS.fresh ()) in
          let nu_symbolic = S.Map.of_alist_exn v_symbolics in
          let targets =
            List.map2_exn v_symbolics after_diff ~f:(fun (_, v_symbolic) (_, rhs) ->
                let rhs_symbolic = I1.f (module DS) nu_symbolic rhs in
                DS.equalize v_symbolic rhs_symbolic;
                v_symbolic)
          in
          if not (DS.solve ~verbose targets) then raise Solver_error;
          let delta = List.map v_symbolics ~f:(fun (x, v_symbolic) -> x, DS.inst v_symbolic) in
          List.map2_exn binds delta ~f:(fun (_, old) (x, rhs) -> x, if D.is_idempotent then rhs else D.combine old rhs)
        ;;
      end)
end
