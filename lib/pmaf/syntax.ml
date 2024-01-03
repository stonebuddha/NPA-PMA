open Core
open Sig

module Make (S : SYMBOL) = struct
  type ('a, 'b, 'c) cached_texp =
    { texp_desc : 'a
    ; texp_info : 'c lazy_t
    ; mutable texp_value : 'b option
    ; texp_id : int
    }

  let _fresh_id =
    let cnt = ref 0 in
    fun () ->
      Int.incr cnt;
      !cnt
  ;;

  let _build texp_desc texp_info = { texp_desc; texp_info; texp_value = None; texp_id = _fresh_id () }

  (** Input expressions. *)
  type ('cst, 'tst, 'flt, 'mem) texp0 = (('cst, 'tst, 'flt, 'mem) texp0_desc, 'mem, S.Set.t) cached_texp

  and ('cst, 'tst, 'flt, 'mem) texp0_desc =
    | T0_term of 'cst
    | T0_seq of 'cst * ('cst, 'tst, 'flt, 'mem) texp0
    | T0_call of S.t * ('cst, 'tst, 'flt, 'mem) texp0
    | T0_cond of 'tst * ('cst, 'tst, 'flt, 'mem) texp0 * ('cst, 'tst, 'flt, 'mem) texp0
    | T0_prob of 'flt * ('cst, 'tst, 'flt, 'mem) texp0 * ('cst, 'tst, 'flt, 'mem) texp0
    | T0_ndet of ('cst, 'tst, 'flt, 'mem) texp0 * ('cst, 'tst, 'flt, 'mem) texp0
    | T0_hole of S.t
    | T0_concat of ('cst, 'tst, 'flt, 'mem) texp0 * S.t * ('cst, 'tst, 'flt, 'mem) texp0
    | T0_inf_closure of ('cst, 'tst, 'flt, 'mem) texp0 * S.t

  let t0_term c = _build (T0_term c) (lazy S.Set.empty)
  let t0_seq (c, t0) = _build (T0_seq (c, t0)) t0.texp_info
  let t0_call (x, t0) = _build (T0_call (x, t0)) (lazy (Lazy.force t0.texp_info))

  let t0_cond (phi, t1, t2) =
    _build (T0_cond (phi, t1, t2)) (lazy (S.Set.union (Lazy.force t1.texp_info) (Lazy.force t2.texp_info)))
  ;;

  let t0_prob (prb, t1, t2) =
    _build (T0_prob (prb, t1, t2)) (lazy (S.Set.union (Lazy.force t1.texp_info) (Lazy.force t2.texp_info)))
  ;;

  let t0_ndet (t1, t2) =
    _build (T0_ndet (t1, t2)) (lazy (S.Set.union (Lazy.force t1.texp_info) (Lazy.force t2.texp_info)))
  ;;

  let t0_hole x = _build (T0_hole x) (lazy (S.Set.singleton x))

  let t0_concat (t1, x, t2) =
    _build
      (T0_concat (t1, x, t2))
      (lazy (S.Set.union (S.Set.remove (Lazy.force t1.texp_info) x) (Lazy.force t2.texp_info)))
  ;;

  let t0_inf_closure (t0, x) = _build (T0_inf_closure (t0, x)) (lazy (S.Set.remove (Lazy.force t0.texp_info) x))

  let pp_texp0 pp_cst pp_tst pp_flt fmt t =
    let rec aux fmt t =
      match t.texp_desc with
      | T0_term c -> pp_cst fmt c
      | T0_seq (c, t0) -> Format.fprintf fmt "seq[%a](%a)" pp_cst c aux t0
      | T0_call (x, t0) -> Format.fprintf fmt "call[%a](%a)" S.pp x aux t0
      | T0_cond (phi, t1, t2) -> Format.fprintf fmt "cond[%a](%a, %a)" pp_tst phi aux t1 aux t2
      | T0_prob (prb, t1, t2) -> Format.fprintf fmt "prob[%a](%a, %a)" pp_flt prb aux t1 aux t2
      | T0_ndet (t1, t2) -> Format.fprintf fmt "ndet(%a, %a)" aux t1 aux t2
      | T0_hole x -> S.pp fmt x
      | T0_concat (t1, x, t2) -> Format.fprintf fmt "(%a) .[%a] (%a)" aux t1 S.pp x aux t2
      | T0_inf_closure (t0, x) -> Format.fprintf fmt "(%a)^[%a]" aux t0 S.pp x
    in
    aux fmt t
  ;;

  let is_dirty_texp0 t : bool = Option.is_none t.texp_value

  let mark_dirty_texp0 (dirty : S.Set.t) t : unit =
    let rec aux dirty t =
      let is_dirty = is_dirty_texp0 in
      let mark () = t.texp_value <- None in
      if is_dirty t
      then ()
      else (
        match t.texp_desc with
        | T0_term _ -> ()
        | T0_seq (_, t0) ->
          aux dirty t0;
          if is_dirty t0 then mark ()
        | T0_call (_, t0) ->
          aux dirty t0;
          mark ()
        | T0_cond (_, t1, t2) ->
          aux dirty t1;
          aux dirty t2;
          if is_dirty t1 || is_dirty t2 then mark ()
        | T0_prob (_, t1, t2) ->
          aux dirty t1;
          aux dirty t2;
          if is_dirty t1 || is_dirty t2 then mark ()
        | T0_ndet (t1, t2) ->
          aux dirty t1;
          aux dirty t2;
          if is_dirty t1 || is_dirty t2 then mark ()
        | T0_hole x -> if S.Set.mem dirty x then mark ()
        | T0_concat (t1, x, t2) ->
          aux dirty t2;
          aux (if is_dirty t2 then S.Set.add dirty x else dirty) t1;
          if is_dirty t1 then mark ()
        | T0_inf_closure (t0, _) ->
          aux dirty t0;
          if is_dirty t0 then mark ())
    in
    aux dirty t
  ;;

  let unmasked_copy_texp0 (t : ('cst, 'tst, 'flt, _) texp0) : ('cst, 'tst, 'flt, 'mem) texp0 =
    let tbl = Int.Table.create () in
    let rec aux t =
      match Int.Table.find tbl t.texp_id with
      | Some t' -> t'
      | None ->
        let t' =
          match t.texp_desc with
          | T0_term c -> t0_term c
          | T0_seq (c, t0) -> t0_seq (c, aux t0)
          | T0_call (x, t0) -> t0_call (x, aux t0)
          | T0_cond (phi, t1, t2) -> t0_cond (phi, aux t1, aux t2)
          | T0_prob (prb, t1, t2) -> t0_prob (prb, aux t1, aux t2)
          | T0_ndet (t1, t2) -> t0_ndet (aux t1, aux t2)
          | T0_hole x -> t0_hole x
          | T0_concat (t1, x, t2) -> t0_concat (aux t1, x, aux t2)
          | T0_inf_closure (t0, x) -> t0_inf_closure (aux t0, x)
        in
        Int.Table.add_exn tbl ~key:t.texp_id ~data:t';
        t'
    in
    aux t
  ;;

  (** Differential expressions (must be linear). *)
  type ('cst, 'tst, 'flt, 'mem) texp1 = (('cst, 'tst, 'flt, 'mem) texp1_desc, 'mem, S.Set.t) cached_texp

  and ('cst, 'tst, 'flt, 'mem) texp1_desc =
    | T1_term of 'cst
    | T1_seq of 'cst * ('cst, 'tst, 'flt, 'mem) texp1
    | T1_call of S.t * 'cst
    | T1_cond of 'tst * ('cst, 'tst, 'flt, 'mem) texp1 * ('cst, 'tst, 'flt, 'mem) texp1
    | T1_prob of 'flt * ('cst, 'tst, 'flt, 'mem) texp1 * ('cst, 'tst, 'flt, 'mem) texp1
    | T1_ndet of ('cst, 'tst, 'flt, 'mem) texp1 * ('cst, 'tst, 'flt, 'mem) texp1
    | T1_hole of S.t
    | T1_concat of ('cst, 'tst, 'flt, 'mem) texp1 * S.t * ('cst, 'tst, 'flt, 'mem) texp1
    | T1_inf_closure of ('cst, 'tst, 'flt, 'mem) texp1 * S.t
    | T1_add of ('cst, 'tst, 'flt, 'mem) texp1 * ('cst, 'tst, 'flt, 'mem) texp1
    | T1_sub of ('cst, 'tst, 'flt, 'mem) texp1 * ('cst, 'tst, 'flt, 'mem) texp1

  let t1_term c = _build (T1_term c) (lazy S.Set.empty)
  let t1_seq (c, t0) = _build (T1_seq (c, t0)) t0.texp_info
  let t1_call (x, c) = _build (T1_call (x, c)) (lazy S.Set.empty)

  let t1_cond (phi, t1, t2) =
    _build (T1_cond (phi, t1, t2)) (lazy (S.Set.union (Lazy.force t1.texp_info) (Lazy.force t2.texp_info)))
  ;;

  let t1_prob (prb, t1, t2) =
    _build (T1_prob (prb, t1, t2)) (lazy (S.Set.union (Lazy.force t1.texp_info) (Lazy.force t2.texp_info)))
  ;;

  let t1_ndet (t1, t2) =
    _build (T1_ndet (t1, t2)) (lazy (S.Set.union (Lazy.force t1.texp_info) (Lazy.force t2.texp_info)))
  ;;

  let t1_hole x = _build (T1_hole x) (lazy (S.Set.singleton x))

  let t1_concat (t1, x, t2) =
    _build
      (T1_concat (t1, x, t2))
      (lazy (S.Set.union (S.Set.remove (Lazy.force t1.texp_info) x) (Lazy.force t2.texp_info)))
  ;;

  let t1_inf_closure (t0, x) = _build (T1_inf_closure (t0, x)) (lazy (S.Set.remove (Lazy.force t0.texp_info) x))

  let t1_add (t1, t2) =
    _build (T1_add (t1, t2)) (lazy (S.Set.union (Lazy.force t1.texp_info) (Lazy.force t2.texp_info)))
  ;;

  let t1_sub (t1, t2) =
    _build (T1_sub (t1, t2)) (lazy (S.Set.union (Lazy.force t1.texp_info) (Lazy.force t2.texp_info)))
  ;;

  let pp_texp1 pp_cst pp_tst pp_flt fmt t =
    let rec aux fmt t =
      match t.texp_desc with
      | T1_term c -> pp_cst fmt c
      | T1_seq (c, t0) -> Format.fprintf fmt "seq[%a](%a)" pp_cst c aux t0
      | T1_call (x, c) -> Format.fprintf fmt "call[%a; %a]" S.pp x pp_cst c
      | T1_cond (phi, t1, t2) -> Format.fprintf fmt "cond[%a](%a, %a)" pp_tst phi aux t1 aux t2
      | T1_prob (prb, t1, t2) -> Format.fprintf fmt "prob[%a](%a, %a)" pp_flt prb aux t1 aux t2
      | T1_ndet (t1, t2) -> Format.fprintf fmt "ndet(%a, %a)" aux t1 aux t2
      | T1_hole x -> S.pp fmt x
      | T1_concat (t1, x, t2) -> Format.fprintf fmt "(%a) .[%a] (%a)" aux t1 S.pp x aux t2
      | T1_inf_closure (t0, x) -> Format.fprintf fmt "(%a)^[%a]" aux t0 S.pp x
      | T1_add (t1, t2) -> Format.fprintf fmt "(%a) + (%a)" aux t1 aux t2
      | T1_sub (t1, t2) -> Format.fprintf fmt "(%a) - (%a)" aux t1 aux t2
    in
    aux fmt t
  ;;

  let is_dirty_texp1 t : bool = Option.is_none t.texp_value

  let mark_dirty_texp1 (dirty : S.Set.t) t : unit =
    let rec aux dirty t =
      let is_dirty = is_dirty_texp1 in
      let mark () = t.texp_value <- None in
      if is_dirty t
      then ()
      else (
        match t.texp_desc with
        | T1_term _ -> ()
        | T1_seq (_, t0) ->
          aux dirty t0;
          if is_dirty t0 then mark ()
        | T1_call (_, _) -> mark ()
        | T1_cond (_, t1, t2) ->
          aux dirty t1;
          aux dirty t2;
          if is_dirty t1 || is_dirty t2 then mark ()
        | T1_prob (_, t1, t2) ->
          aux dirty t1;
          aux dirty t2;
          if is_dirty t1 || is_dirty t2 then mark ()
        | T1_ndet (t1, t2) ->
          aux dirty t1;
          aux dirty t2;
          if is_dirty t1 || is_dirty t2 then mark ()
        | T1_hole x -> if S.Set.mem dirty x then mark ()
        | T1_concat (t1, x, t2) ->
          aux dirty t2;
          aux (if is_dirty t2 then S.Set.add dirty x else dirty) t1;
          if is_dirty t1 then mark ()
        | T1_inf_closure (t0, _) ->
          aux dirty t0;
          if is_dirty t0 then mark ()
        | T1_add (t1, t2) ->
          aux dirty t1;
          aux dirty t2;
          if is_dirty t1 || is_dirty t2 then mark ()
        | T1_sub (t1, t2) ->
          aux dirty t1;
          aux dirty t2;
          if is_dirty t1 || is_dirty t2 then mark ())
    in
    aux dirty t
  ;;

  let unmasked_copy_texp1 (t : ('cst, 'tst, 'flt, _) texp1) : ('cst, 'tst, 'flt, 'mem) texp1 =
    let tbl = Int.Table.create () in
    let rec aux t =
      match Int.Table.find tbl t.texp_id with
      | Some t' -> t'
      | None ->
        let t' =
          match t.texp_desc with
          | T1_term c -> t1_term c
          | T1_seq (c, t0) -> t1_seq (c, aux t0)
          | T1_call (x, c) -> t1_call (x, c)
          | T1_cond (phi, t1, t2) -> t1_cond (phi, aux t1, aux t2)
          | T1_prob (prb, t1, t2) -> t1_prob (prb, aux t1, aux t2)
          | T1_ndet (t1, t2) -> t1_ndet (aux t1, aux t2)
          | T1_hole x -> t1_hole x
          | T1_concat (t1, x, t2) -> t1_concat (aux t1, x, aux t2)
          | T1_inf_closure (t0, x) -> t1_inf_closure (aux t0, x)
          | T1_add (t1, t2) -> t1_add (aux t1, aux t2)
          | T1_sub (t1, t2) -> t1_sub (aux t1, aux t2)
        in
        Int.Table.add_exn tbl ~key:t.texp_id ~data:t';
        t'
    in
    aux t
  ;;
end
