open Core
open Sig

module Make
    (S : SYMBOL) (D : sig
      type t
      type tst
      type flt

      val one : t
    end) =
struct
  type label =
    | Seq of D.t
    | Cond of D.tst
    | Prob of D.flt
    | Ndet
    | Call of S.t

  module CFG =
    Hyper_graph.Make
      (S)
      (struct
        type t = label
      end)

  let create_cfg nodes edges =
    List.fold
      edges
      ~init:(List.fold nodes ~init:CFG.empty ~f:(fun acc v -> CFG.add_vertex acc v))
      ~f:(fun acc (u, l, vs) -> CFG.add_edge_e acc (CFG.E.create u l vs))
  ;;

  open Syntax.Make (S)

  type 'mem t0 = (D.t, D.tst, D.flt, 'mem) texp0

  let rec unroll (t : 'mem t0) : 'mem t0 * (S.t * 'mem t0) list =
    match t.texp_desc with
    | T0_concat (t1, y, t2) ->
      let t, binds = unroll t1 in
      t, (y, t2) :: binds
    | _ -> t, []
  ;;

  let rec roll (binds : (S.t * 'mem t0) list) (t1 : 'mem t0) : 'mem t0 =
    match binds with
    | [] -> t1
    | (y, t2) :: rest -> t0_concat (roll rest t1, y, t2)
  ;;

  let subst (x : S.t) (v : 'mem t0) (t : 'mem t0) : 'mem t0 =
    if not (S.Set.mem (Lazy.force t.texp_info) x)
    then t
    else (
      let t', lhs = unroll t in
      let v', rhs = unroll v in
      let rhs_syms = S.Set.of_list (List.map rhs ~f:fst) in
      let lhs' = List.filter lhs ~f:(fun (y, _) -> not (S.Set.mem rhs_syms y)) in
      roll rhs (t0_concat (roll lhs' t', x, v')))
  ;;

  let closure (t : 'mem t0) (x : S.t) : 'mem t0 =
    let t', binds = unroll t in
    let _, outer_rev, inner_rev =
      List.fold binds ~init:(S.Set.empty, [], []) ~f:(fun (must, outer, inner) (y, v) ->
          let fv = Lazy.force v.texp_info in
          if S.Set.mem fv x
          then S.Set.add must y, outer, (y, v) :: inner
          else if not (S.Set.is_empty (S.Set.inter must fv))
          then S.Set.add must y, outer, (y, v) :: inner
          else must, (y, v) :: outer, inner)
    in
    roll (List.rev outer_rev) (t0_inf_closure (roll (List.rev inner_rev) t', x))
  ;;

  let gaussian_elim (g : CFG.t) (entry : S.t) : 'mem t0 =
    let eqns =
      CFG.fold_vertex g ~init:[] ~f:(fun v acc ->
          match CFG.succ_e g v with
          | [] -> (v, t0_term D.one) :: acc
          | [ e ] ->
            (match CFG.E.label e, CFG.E.dsts e with
            | Seq c, [ u ] -> (v, t0_seq (c, t0_hole u)) :: acc
            | Cond phi, [ u1; u2 ] -> (v, t0_cond (phi, t0_hole u1, t0_hole u2)) :: acc
            | Prob prb, [ u1; u2 ] -> (v, t0_prob (prb, t0_hole u1, t0_hole u2)) :: acc
            | Ndet, [ u1; u2 ] -> (v, t0_ndet (t0_hole u1, t0_hole u2)) :: acc
            | Call x, [ u ] -> (v, t0_call (x, t0_hole u)) :: acc
            | _ -> raise (Invalid_argument "gaussian_elim"))
          | _ -> raise (Invalid_argument "gaussian_elim"))
    in
    let eqns = Array.of_list eqns in
    let n = Array.length eqns in
    for i = 0 to n - 1 do
      let x, rhs = eqns.(i) in
      if S.Set.mem (Lazy.force rhs.texp_info) x then eqns.(i) <- x, closure rhs x;
      let _, v = eqns.(i) in
      for j = i + 1 to n - 1 do
        let x', rhs' = eqns.(j) in
        eqns.(j) <- x', subst x v rhs'
      done
    done;
    for i = n - 1 downto 1 do
      let x, v = eqns.(i) in
      for j = 0 to i - 1 do
        let x', rhs' = eqns.(j) in
        eqns.(j) <- x', subst x v rhs'
      done
    done;
    match Array.find eqns ~f:(fun (x, _) -> S.equal x entry) with
    | Some (_, rhs) -> rhs
    | None -> raise (Invalid_argument "gaussian_elim")
  ;;
end
