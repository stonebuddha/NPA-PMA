open Core
open Srk
open Syntax
module Ctx = MakeSimplifyingContext ()

module Make (V : sig
  val det_vars : string list
  val rnd_vars : string list

  type expr
  type dist
  type cond

  val destruct_expr
    :  expr
    -> [ `Real of Mpqf.t | `Var of string | `Add of expr list | `Mul of expr list | `Div of expr * expr | `Neg of expr ]

  val destruct_dist
    :  dist
    -> [ `Normal of expr * expr
       | `Laplace of expr * expr
       | `Categorical of (expr * expr) list
       | `Uniform of expr * expr
       ]

  val pp_cond : Format.formatter -> cond -> unit

  val destruct_cond
    :  cond
    -> [ `Tru
       | `Fls
       | `And of cond list
       | `Or of cond list
       | `Not of cond
       | `Eq of expr * expr
       | `Leq of expr * expr
       | `Lt of expr * expr
       ]
end) =
struct
  let srk = Ctx.context
  let vars = V.det_vars @ V.rnd_vars

  let syms =
    List.map V.det_vars ~f:(fun x -> Ctx.mk_symbol ~name:x `TyInt)
    @ List.map V.rnd_vars ~f:(fun x -> Ctx.mk_symbol ~name:x `TyReal)
  ;;

  let var2sym =
    let tbl = String.Table.create () in
    List.iter2_exn vars syms ~f:(fun x s -> String.Table.add_exn tbl ~key:x ~data:s);
    String.Table.find_exn tbl
  ;;

  let sym2var =
    let tbl = Hashtbl.Poly.create () in
    List.iter2_exn syms vars ~f:(fun s x -> Hashtbl.Poly.add_exn tbl ~key:s ~data:x);
    Hashtbl.Poly.find tbl
  ;;

  module Var = struct
    type t = string [@@deriving compare]

    let pp = String.pp
    let show x = x
    let typ x = if List.mem V.det_vars x ~equal:String.equal then `TyInt else `TyReal
    let symbol_of x = var2sym x
    let of_symbol x = sym2var x
  end

  module T = Transition.Make (Ctx) (Var)

  (* let () = T.domain := (module Iteration.Split ((val !T.domain))) *)
  let var2cst x = Ctx.mk_const (var2sym x)

  module D = struct
    type t = T.t [@@deriving equal]
    type tst = V.cond
    type flt

    let pp = T.pp
    let pp_tst = V.pp_cond
    let pp_flt _ (_ : flt) = raise (Invalid_argument "pp_flt")
    let extend = T.mul
    let combine = T.add
    let subtract _ _ = raise (Invalid_argument "subtract")
    let zero = T.zero
    let one = T.one

    let rec encode_expr e =
      match V.destruct_expr e with
      | `Real q -> Ctx.mk_real q
      | `Var x -> var2cst x
      | `Add es -> Ctx.mk_add (List.map es ~f:encode_expr)
      | `Mul es -> Ctx.mk_mul (List.map es ~f:encode_expr)
      | `Div (e1, e2) -> Ctx.mk_div (encode_expr e1) (encode_expr e2)
      | `Neg e0 -> Ctx.mk_neg (encode_expr e0)
    ;;

    let rec encode_cond f =
      match V.destruct_cond f with
      | `Tru -> Ctx.mk_true
      | `Fls -> Ctx.mk_false
      | `And fs -> Ctx.mk_and (List.map fs ~f:encode_cond)
      | `Or fs -> Ctx.mk_or (List.map fs ~f:encode_cond)
      | `Not f0 -> Ctx.mk_not (encode_cond f0)
      | `Eq (e1, e2) -> Ctx.mk_eq (encode_expr e1) (encode_expr e2)
      | `Leq (e1, e2) -> Ctx.mk_leq (encode_expr e1) (encode_expr e2)
      | `Lt (e1, e2) -> Ctx.mk_lt (encode_expr e1) (encode_expr e2)
    ;;

    let cond_combine f t1 t2 =
      let g1 = T.assume (encode_cond f) in
      let g2 = T.assume (Ctx.mk_not (encode_cond f)) in
      T.add (T.mul g1 t1) (T.mul g2 t2)
    ;;

    let prob_combine (_ : flt) _ _ = raise (Invalid_argument "prob_combine")
    let ndet_combine = T.add
    let encode_assign x e = T.assign x (encode_expr e)
    let encode_assigns xes = T.parallel_assign (List.map xes ~f:(fun (x, e) -> x, encode_expr e))

    let encode_sample x d =
      match V.destruct_dist d with
      | `Normal (loc, _) -> T.assign x (encode_expr loc)
      | `Laplace (mu, _) -> T.assign x (encode_expr mu)
      | `Categorical cats ->
        T.assign x (Ctx.mk_add (List.map cats ~f:(fun (e, p) -> Ctx.mk_mul [ encode_expr p; encode_expr e ])))
      | `Uniform (a, b) ->
        T.assign x (Ctx.mk_mul [ Ctx.mk_real (QQ.of_frac 1 2); Ctx.mk_add [ encode_expr a; encode_expr b ] ])
    ;;

    let encode_assume f = T.assume (encode_cond f)
    let is_idempotent = true
  end

  module D_symbolic = struct
    include D

    type t_non_symbolic = t
    type t_symbolic = t Int.Map.t * t [@@deriving equal]
    type manager = (int * t_symbolic) list ref * (int * t) list ref

    let create_manager () = ref [], ref []

    module Symbolic (M : sig
      val man : manager
    end) =
    struct
      type t = t_symbolic [@@deriving equal]
      type nonrec tst = tst
      type nonrec flt = flt

      let pp fmt (regs, c) =
        Format.fprintf
          fmt
          "%a + %a"
          pp
          c
          (Format.pp_print_list
             ~pp_sep:(fun fmt () -> Format.fprintf fmt " + ")
             (fun fmt (hole, coef) -> Format.fprintf fmt "%a * [%d]" pp coef hole))
          (Int.Map.to_alist regs)
      ;;

      let pp_tst = pp_tst
      let pp_flt = pp_flt

      let extend t1 t2 =
        match t1, t2 with
        | (regs1, c1), (regs2, c2) when Int.Map.is_empty regs1 ->
          Int.Map.map regs2 ~f:(fun coef -> extend c1 coef), extend c1 c2
        | _ -> raise (Invalid_argument "extend")
      ;;

      let extend_lin = extend

      let combine t1 t2 =
        match t1, t2 with
        | (regs1, c1), (regs2, c2) ->
          ( Int.Map.merge regs1 regs2 ~f:(fun ~key:_ -> function
              | `Both (coef1, coef2) -> Some (combine coef1 coef2)
              | `Left coef1 -> Some coef1
              | `Right coef2 -> Some coef2)
          , combine c1 c2 )
      ;;

      let subtract _ _ = raise (Invalid_argument "subtract")
      let zero = Int.Map.empty, zero
      let one = Int.Map.empty, one
      let embed t = Int.Map.empty, t

      let cond_combine f t1 t2 =
        let g1 = T.assume (encode_cond f) in
        let g2 = T.assume (Ctx.mk_not (encode_cond f)) in
        combine (extend (embed g1) t1) (extend (embed g2) t2)
      ;;

      let prob_combine (_ : flt) _ _ = raise (Invalid_argument "prob_combine")
      let ndet_combine t1 t2 = combine t1 t2
      let is_idempotent = true

      let fresh =
        let counter = ref 0 in
        fun () ->
          Int.incr counter;
          Int.Map.singleton !counter T.one, T.zero
      ;;

      let equalize t1 t2 =
        let extract (regs, c) =
          if Int.Map.length regs = 1 && T.is_zero c
          then (
            let hole, coef = Int.Map.to_alist regs |> List.hd_exn in
            if T.is_one coef then Some hole else None)
          else None
        in
        match extract t1 with
        | Some h1 -> fst M.man := (h1, t2) :: !(fst M.man)
        | None ->
          (match extract t2 with
          | Some h2 -> fst M.man := (h2, t1) :: !(fst M.man)
          | None -> raise (Invalid_argument "equalize"))
      ;;

      let eval sol (regs, c) =
        let tbl = Int.Table.of_alist_exn sol in
        let sol = Int.Table.find_exn tbl in
        Int.Map.fold regs ~init:c ~f:(fun ~key:hole ~data:coef acc -> T.add acc (T.mul coef (sol hole)))
      ;;

      let subst (regs, c) hole dst =
        match Int.Map.find regs hole with
        | None -> regs, c
        | Some coef ->
          let lhs = Int.Map.remove regs hole, c in
          let rhs = extend (embed coef) dst in
          combine lhs rhs
      ;;

      let rearrange hole (regs, c) =
        match Int.Map.find regs hole with
        | None -> None
        | Some coef -> Some (coef, (Int.Map.remove regs hole, c))
      ;;

      let elim eqs =
        let eqs = Array.of_list eqs in
        let n = Array.length eqs in
        for i = 0 to n - 1 do
          let x, rhs = eqs.(i) in
          (match rearrange x rhs with
          | None -> ()
          | Some (coef, rest) -> eqs.(i) <- x, extend (embed (T.star coef)) rest);
          let _, v = eqs.(i) in
          for j = i + 1 to n - 1 do
            let x', rhs' = eqs.(j) in
            eqs.(j) <- x', subst rhs' x v
          done
        done;
        for i = n - 1 downto 1 do
          let x, v = eqs.(i) in
          for j = 0 to i - 1 do
            let x', rhs' = eqs.(j) in
            eqs.(j) <- x', subst rhs' x v
          done
        done;
        Array.to_list eqs
        |> List.map ~f:(fun (x, (regs, c)) ->
               assert (Int.Map.is_empty regs);
               x, c)
      ;;

      let solve ~verbose:_ _ =
        snd M.man := elim !(fst M.man);
        true
      ;;

      let inst t = eval !(snd M.man) t
    end
  end
end
