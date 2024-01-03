open Core
open Owl
open Lp_utils

module Make (V : sig
  val vars : string list

  type formula

  val pp_formula : Format.formatter -> formula -> unit

  val destruct_formula
    :  formula
    -> [ `Tru | `Fls | `Var of string | `And of formula * formula | `Or of formula * formula | `Not of formula ]
end) =
struct
  let num_vars = List.length V.vars

  module Make_D (S : sig
    val dim : int
    val states : bool array array
    val state2index : bool array -> int
    val eval_formula : bool array -> V.formula -> bool
    val assign : bool array -> string -> bool -> bool array
  end) =
  struct
    let dim = S.dim

    type t = Mat.mat

    let equal m1 m2 =
      let exception Exit in
      try
        Mat.iter2 (fun f1 f2 -> if Float.(abs (f1 - f2) < 1e-12) then () else raise Exit) m1 m2;
        true
      with
      | Exit -> false
    ;;

    type tst = V.formula
    type flt = float

    let pp fmt m =
      Format.fprintf fmt "@.";
      Format.pp_print_list
        ~pp_sep:(fun fmt () -> Format.fprintf fmt "@.")
        (fun fmt r -> Format.pp_print_list ~pp_sep:(fun _ () -> ()) (fun fmt f -> Format.fprintf fmt "%9.6f" f) fmt r)
        fmt
        (Array.to_list (Array.map (Mat.to_arrays m) ~f:Array.to_list));
      Format.fprintf fmt "@."
    ;;

    let pp_tst = V.pp_formula
    let pp_flt = Float.pp
    let extend m1 m2 = Mat.dot m1 m2
    let combine m1 m2 = Mat.add m1 m2
    let subtract m1 m2 = Mat.sub m1 m2
    let zero = Mat.zeros dim dim
    let one = Mat.eye dim

    let encode_formula f =
      let res = Mat.zeros dim dim in
      Array.iteri S.states ~f:(fun i state -> Mat.set res i i (if S.eval_formula state f then 1.0 else 0.0));
      res
    ;;

    let cond_combine f m1 m2 =
      let w1 = encode_formula f in
      let w2 = Mat.sub one w1 in
      Mat.add (Mat.dot w1 m1) (Mat.dot w2 m2)
    ;;

    let prob_combine p m1 m2 = Mat.add (Mat.scalar_mul p m1) (Mat.scalar_mul Float.(1.0 - p) m2)
    let ndet_combine m1 m2 = Mat.min2 m1 m2

    let encode_assign x b =
      let res = Mat.zeros dim dim in
      Array.iteri S.states ~f:(fun i state ->
          let state' = S.assign state x b in
          let i' = S.state2index state' in
          Mat.set res i i' 1.0);
      res
    ;;

    let is_idempotent = false
  end

  module D = Make_D (struct
    let dim = Int.pow 2 num_vars

    let get_var =
      let tbl = String.Table.create () in
      List.iteri V.vars ~f:(fun i x -> String.Table.add_exn tbl ~key:x ~data:i);
      String.Table.find_exn tbl
    ;;

    let states =
      let rec aux vars state acc =
        match vars with
        | [] -> Array.of_list_rev state :: acc
        | _ :: rest -> aux rest (true :: state) (aux rest (false :: state) acc)
      in
      Array.of_list_rev (aux V.vars [] [])
    ;;

    let state2index state = Array.fold state ~init:0 ~f:(fun acc b -> (acc * 2) + if b then 1 else 0)

    let rec eval_formula state f =
      match V.destruct_formula f with
      | `Tru -> true
      | `Fls -> false
      | `Var x -> state.(get_var x)
      | `And (f1, f2) -> eval_formula state f1 && eval_formula state f2
      | `Or (f1, f2) -> eval_formula state f1 || eval_formula state f2
      | `Not f0 -> not (eval_formula state f0)
    ;;

    let assign state x b =
      let state' = Array.copy state in
      state'.(get_var x) <- b;
      state'
    ;;
  end)

  module Make_symbolic (D : sig
    include Pmaf.Sig.DOMAIN with type t = Mat.mat

    val dim : int
    val encode_formula : V.formula -> t
  end)
  (B : Annot.BACKEND) =
  struct
    module F = B.F
    include D

    type t_non_symbolic = t

    include Annot.Linexpr (B)

    type t_symbolic = linexpr array array [@@deriving equal]
    type manager = B.lp_manager

    let create_manager () = B.create_lp_manager ()

    module Symbolic (M : sig
      val man : manager
    end) =
    struct
      include Annot.Make (B) (M)

      type t = t_symbolic [@@deriving equal]
      type nonrec tst = tst
      type nonrec flt = flt

      let pp fmt m =
        Format.fprintf fmt "@.";
        Format.pp_print_list
          ~pp_sep:(fun fmt () -> Format.fprintf fmt "@.")
          (fun fmt r -> Format.pp_print_list ~pp_sep:(fun fmt () -> Format.pp_print_tab fmt ()) pp_linexpr fmt r)
          fmt
          (Array.to_list (Array.map m ~f:Array.to_list));
        Format.fprintf fmt "@."
      ;;

      let pp_tst = pp_tst
      let pp_flt = pp_flt

      let extend m1 m2 =
        let res = Array.make_matrix ~dimx:D.dim ~dimy:D.dim (const_annot F.zero) in
        for i = 0 to D.dim - 1 do
          for k = 0 to D.dim - 1 do
            if not (is_zero_linexpr m1.(i).(k))
            then
              for j = 0 to D.dim - 1 do
                if not (is_zero_linexpr m2.(k).(j))
                then res.(i).(j) <- add_annot res.(i).(j) (mul_annot m1.(i).(k) m2.(k).(j))
              done
          done
        done;
        res
      ;;

      let extend_lin = extend
      let combine m1 m2 = Array.map2_exn m1 m2 ~f:(Array.map2_exn ~f:add_annot)
      let subtract m1 m2 = Array.map2_exn m1 m2 ~f:(Array.map2_exn ~f:sub_annot)
      let zero : t_symbolic = Array.make_matrix ~dimx:D.dim ~dimy:D.dim (const_annot F.zero)

      let one : t_symbolic =
        Array.init D.dim ~f:(fun i ->
            Array.init D.dim ~f:(fun j -> if i = j then const_annot F.one else const_annot F.zero))
      ;;

      let embed m =
        Array.init D.dim ~f:(fun i -> Array.init D.dim ~f:(fun j -> const_annot (F.of_float (Mat.get m i j))))
      ;;

      let cond_combine f m1 m2 =
        let w1 = embed (D.encode_formula f) in
        let w2 = subtract one w1 in
        combine (extend w1 m1) (extend w2 m2)
      ;;

      let prob_combine p m1 m2 =
        let p1 = F.of_float p in
        let p2 = F.(one - of_float p) in
        combine (Array.map m1 ~f:(Array.map ~f:(scale_annot p1))) (Array.map m2 ~f:(Array.map ~f:(scale_annot p2)))
      ;;

      let ndet_combine m1 m2 = Array.map2_exn m1 m2 ~f:(Array.map2_exn ~f:min_annot)
      let is_idempotent = false
      let fresh () = Array.init D.dim ~f:(fun _ -> Array.init D.dim ~f:(fun _ -> new_nonneg_annot ()))
      let equalize m1 m2 = Array.iter2_exn m1 m2 ~f:(Array.iter2_exn ~f:assert_eq_annot)

      let solve ~verbose targets =
        (* FIXME: LP solvers are not robust *)
        List.iter (List.take targets 0) ~f:(fun m ->
            let update v = B.update_objective_coefficients M.man [ new_lpvar_for v, F.one ] in
            Array.iter m ~f:(Array.iter ~f:update));
        B.set_log_level M.man 0;
        B.initial_solve M.man `Maximize;
        if verbose then Format.eprintf "[INFO] %a@." B.pp_stats M.man;
        match B.status M.man with
        | `Solved -> true
        | _ -> false
      ;;

      let inst m =
        let sol = B.primal_column_solution M.man in
        Mat.init_2d D.dim D.dim (fun i j -> F.to_float (eval sol m.(i).(j)))
      ;;
    end
  end

  module D_symbolic = Make_symbolic (D)
end
