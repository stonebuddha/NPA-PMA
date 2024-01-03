open Core
open Lp_utils

module Make (K : sig
  val k : int
end) =
struct
  let comb =
    let res = Array.init (K.k + 1) ~f:(fun _ -> Array.create ~len:(K.k + 1) 0.0) in
    res.(0).(0) <- 1.0;
    for i = 1 to K.k do
      res.(i).(0) <- 1.0;
      for j = 1 to i do
        res.(i).(j) <- res.(i - 1).(j - 1) +. res.(i - 1).(j)
      done
    done;
    fun i j -> res.(i).(j)
  ;;

  module D = struct
    type t = float array

    let equal rs1 rs2 = Array.for_all2_exn rs1 rs2 ~f:(fun r1 r2 -> Float.(abs (r1 - r2) < 1e-9))

    type tst
    type flt = float

    let pp fmt rs =
      Format.fprintf fmt "(";
      Format.pp_print_list ~pp_sep:(fun fmt () -> Format.fprintf fmt ", ") Float.pp fmt (Array.to_list rs);
      Format.fprintf fmt ")"
    ;;

    let pp_tst _ (_ : tst) = raise (Invalid_argument "pp_tst")
    let pp_flt = Float.pp

    let extend rs1 rs2 =
      Array.init (K.k + 1) ~f:(fun i ->
          let res = ref 0.0 in
          for j = 0 to i do
            res := !res +. (comb i j *. rs1.(j) *. rs2.(i - j))
          done;
          !res)
    ;;

    let combine rs1 rs2 = Array.map2_exn rs1 rs2 ~f:Float.add
    let subtract rs1 rs2 = Array.map2_exn rs1 rs2 ~f:Float.sub
    let zero = Array.create ~len:(K.k + 1) 0.0
    let one = Array.init (K.k + 1) ~f:(fun i -> if i = 0 then 1.0 else 0.0)
    let cond_combine (_ : tst) _ _ = raise (Invalid_argument "cond_combine")
    let prob_combine p rs1 rs2 = Array.map2_exn rs1 rs2 ~f:(fun r1 r2 -> Float.((p * r1) + ((1.0 - p) * r2)))
    let ndet_combine rs1 rs2 = Array.map2_exn rs1 rs2 ~f:Float.min
    let reward r = Array.init (K.k + 1) ~f:(fun i -> Float.int_pow r i)
    let is_idempotent = false
  end

  module D_symbolic (B : Annot.BACKEND) = struct
    module F = B.F
    include D

    type t_non_symbolic = t

    include Annot.Linexpr (B)

    type t_symbolic = linexpr array [@@deriving equal]
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

      let pp fmt rs =
        Format.fprintf fmt "(";
        Format.pp_print_list ~pp_sep:(fun fmt () -> Format.fprintf fmt ", ") pp_linexpr fmt (Array.to_list rs);
        Format.fprintf fmt ")"
      ;;

      let pp_tst = pp_tst
      let pp_flt = pp_flt

      let extend rs1 rs2 =
        Array.init (K.k + 1) ~f:(fun i ->
            let res = ref (const_annot F.zero) in
            for j = 0 to i do
              res := add_annot !res (scale_annot (F.of_float (comb i j)) (mul_annot rs1.(j) rs2.(i - j)))
            done;
            !res)
      ;;

      let extend_lin = extend
      let combine rs1 rs2 = Array.map2_exn rs1 rs2 ~f:add_annot
      let subtract rs1 rs2 = Array.map2_exn rs1 rs2 ~f:sub_annot
      let zero = Array.create ~len:(K.k + 1) (const_annot F.zero)
      let one = Array.init (K.k + 1) ~f:(fun i -> if i = 0 then const_annot F.one else const_annot F.zero)
      let cond_combine (_ : tst) _ _ = raise (Invalid_argument "cond_combine")

      let prob_combine p rs1 rs2 =
        Array.map2_exn rs1 rs2 ~f:(fun r1 r2 ->
            add_annot (scale_annot (F.of_float p) r1) (scale_annot F.(one - of_float p) r2))
      ;;

      let ndet_combine rs1 rs2 = Array.map2_exn rs1 rs2 ~f:min_annot
      let is_idempotent = false

      let embed rs =
        let on v =
          let v = F.of_float v in
          const_annot (if F.is_zero v then F.zero else v)
        in
        Array.map rs ~f:on
      ;;

      let fresh () = Array.init (K.k + 1) ~f:(fun _ -> new_nonneg_annot ())
      let equalize rs1 rs2 = Array.iter2_exn rs1 rs2 ~f:assert_eq_annot

      let solve ~verbose targets =
        (* FIXME: LP solvers are not robust *)
        List.iter (List.take targets 0) ~f:(fun rs ->
            Array.iter rs ~f:(fun r -> B.update_objective_coefficients M.man [ new_lpvar_for r, F.one ]));
        B.set_log_level M.man 0;
        B.initial_solve M.man `Maximize;
        if verbose then Format.eprintf "[INFO] %a@." B.pp_stats M.man;
        match B.status M.man with
        | `Solved -> true
        | _ -> false
      ;;

      let inst rs =
        let sol = B.primal_column_solution M.man in
        Array.map rs ~f:(fun r -> F.to_float (eval sol r))
      ;;
    end
  end
end
