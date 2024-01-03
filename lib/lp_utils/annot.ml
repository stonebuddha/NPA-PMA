open Core

module type FLOAT = sig
  type t

  val zero : t
  val one : t
  val minus_one : t
  val infinity : t
  val neg_infinity : t
  val abs : t -> t
  val min : t -> t -> t
  val max : t -> t -> t
  val ( ~- ) : t -> t
  val ( + ) : t -> t -> t
  val ( - ) : t -> t -> t
  val ( * ) : t -> t -> t
  val ( / ) : t -> t -> t
  val ( >= ) : t -> t -> bool
  val ( < ) : t -> t -> bool
  val ( > ) : t -> t -> bool
  val ( <= ) : t -> t -> bool
  val is_zero : t -> bool
  val of_int : int -> t
  val to_int : t -> int
  val of_float : float -> t
  val to_float : t -> float
  val of_mpq : Mpqf.t -> t
  val to_mpq : t -> Mpqf.t
  val pp : Format.formatter -> t -> unit
  val string_of_t : t -> string
end

module type BACKEND = sig
  module F : FLOAT

  type lp_manager
  type lp_var [@@deriving sexp, compare, hash, equal]

  val pp_lp_var : Format.formatter -> lp_var -> unit
  val create_lp_manager : unit -> lp_manager
  val add_lprow : lp_manager -> ?k:F.t -> (lp_var * F.t) list -> [ `Eq | `Ge | `Le ] -> unit
  val new_lpvar : ?lower:F.t -> ?upper:F.t -> lp_manager -> lp_var
  val update_objective_coefficients : lp_manager -> (lp_var * F.t) list -> unit
  val set_log_level : lp_manager -> int -> unit
  val initial_solve : lp_manager -> [ `Maximize | `Minimize ] -> unit
  val solve_primal : lp_manager -> [ `Maximize | `Minimize ] -> unit
  val primal_objective_value : lp_manager -> F.t
  val primal_column_solution : lp_manager -> lp_var -> F.t
  val status : lp_manager -> [ `Failed | `Solved ]
  val pp_stats : Format.formatter -> lp_manager -> unit
end

module Linexpr (B : BACKEND) = struct
  module Lp_var_map = Map.Make (struct
    type t = B.lp_var [@@deriving sexp, compare]
  end)

  type linexpr =
    { coefs : B.F.t Lp_var_map.t
    ; cst : B.F.t
    }

  let equal_linexpr l1 l2 = Lp_var_map.equal (fun f1 f2 -> B.F.(is_zero (f1 - f2))) l1.coefs l2.coefs

  let pp_linexpr fmt { coefs; cst } =
    Format.pp_print_list
      ~pp_sep:(fun fmt () -> Format.fprintf fmt " + ")
      (fun fmt (lpvar, coef) -> Format.fprintf fmt "%a * %a" B.F.pp coef B.pp_lp_var lpvar)
      fmt
      (Lp_var_map.to_alist coefs);
    if not B.F.(is_zero cst)
    then (
      if not (Lp_var_map.is_empty coefs) then Format.fprintf fmt " + ";
      Format.fprintf fmt "%a" B.F.pp cst)
  ;;

  let is_zero_linexpr { coefs; cst } = Lp_var_map.is_empty coefs && B.F.is_zero cst
end

module Make
    (B : BACKEND) (M : sig
      val man : B.lp_manager
    end) =
struct
  module F = B.F

  let new_lpvar () = B.new_lpvar M.man
  let new_nonneg_lpvar () = B.new_lpvar ~lower:F.zero M.man
  let const_lpvar k = B.new_lpvar ~lower:k ~upper:k M.man
  let zero_lpvar = const_lpvar F.zero
  let assert_eq_lpvar lpvar1 lpvar2 = B.add_lprow M.man [ lpvar1, F.one; lpvar2, F.minus_one ] `Eq
  let assert_eq_lpvar_scalar lpvar k = B.add_lprow M.man ~k [ lpvar, F.one ] `Eq
  let assert_ge_lpvar lpvar1 lpvar2 = B.add_lprow M.man [ lpvar1, F.one; lpvar2, F.minus_one ] `Ge
  let assert_ge_lpvar_scalar lpvar k = B.add_lprow M.man ~k [ lpvar, F.one ] `Ge
  let assert_ge_scalar_lpvar k lpvar = B.add_lprow M.man ~k [ lpvar, F.one ] `Le

  let scale_lpvar k lpvar =
    let lpvar' = new_lpvar () in
    B.add_lprow M.man [ lpvar', F.one; (lpvar, F.(-k)) ] `Eq;
    lpvar'
  ;;

  let add_lpvar lpvar1 lpvar2 =
    let lpvar = new_lpvar () in
    B.add_lprow M.man [ lpvar, F.one; lpvar1, F.minus_one; lpvar2, F.minus_one ] `Eq;
    lpvar
  ;;

  let add_scale_lpvar lpvar1 k lpvar2 =
    let lpvar = new_lpvar () in
    B.add_lprow M.man [ lpvar, F.one; lpvar1, F.minus_one; (lpvar2, F.(-k)) ] `Eq;
    lpvar
  ;;

  let add_lpvar_scalar lpvar1 k =
    let lpvar = new_lpvar () in
    B.add_lprow M.man ~k [ lpvar, F.one; lpvar1, F.minus_one ] `Eq;
    lpvar
  ;;

  let sub_lpvar lpvar1 lpvar2 =
    let lpvar = new_lpvar () in
    B.add_lprow M.man [ lpvar, F.one; lpvar1, F.minus_one; lpvar2, F.one ] `Eq;
    lpvar
  ;;

  let sub_scale_lpvar lpvar1 k lpvar2 =
    let lpvar = new_lpvar () in
    B.add_lprow M.man [ lpvar, F.one; lpvar1, F.minus_one; lpvar2, k ] `Eq;
    lpvar
  ;;

  let sub_lpvar_scalar lpvar1 k =
    let lpvar = new_lpvar () in
    B.add_lprow M.man ~k:F.(-k) [ lpvar, F.one; lpvar1, F.minus_one ] `Eq;
    lpvar
  ;;

  let sub_scalar_lpvar k lpvar2 =
    let lpvar = new_lpvar () in
    B.add_lprow M.man ~k [ lpvar, F.one; lpvar2, F.one ] `Eq;
    lpvar
  ;;

  let min_lpvar lpvar1 lpvar2 =
    let lpvar = new_lpvar () in
    assert_ge_lpvar lpvar1 lpvar;
    assert_ge_lpvar lpvar2 lpvar;
    lpvar
  ;;

  let min_lpvar_scalar lpvar1 k =
    let lpvar = new_lpvar () in
    assert_ge_lpvar lpvar1 lpvar;
    assert_ge_scalar_lpvar k lpvar;
    lpvar
  ;;

  let max_lpvar lpvar1 lpvar2 =
    let lpvar = new_lpvar () in
    assert_ge_lpvar lpvar lpvar1;
    assert_ge_lpvar lpvar lpvar2;
    lpvar
  ;;

  let max_lpvar_scalar lpvar1 k =
    let lpvar = new_lpvar () in
    assert_ge_lpvar lpvar lpvar1;
    assert_ge_lpvar_scalar lpvar k;
    lpvar
  ;;

  include Linexpr (B)

  let new_annot () = { coefs = Lp_var_map.singleton (new_lpvar ()) F.one; cst = F.zero }
  let new_nonneg_annot () = { coefs = Lp_var_map.singleton (new_nonneg_lpvar ()) F.one; cst = F.zero }
  let const_annot k = { coefs = Lp_var_map.empty; cst = k }
  let scale_annot k l = { coefs = Lp_var_map.map l.coefs ~f:(fun coef -> F.(k * coef)); cst = F.(k * l.cst) }

  let mul_annot l1 l2 =
    if Lp_var_map.is_empty l1.coefs
    then scale_annot l1.cst l2
    else if Lp_var_map.is_empty l2.coefs
    then scale_annot l2.cst l1
    else raise (Invalid_argument "mul_annot")
  ;;

  let add_annot l1 l2 =
    { coefs =
        Lp_var_map.merge l1.coefs l2.coefs ~f:(fun ~key:_ -> function
          | `Both (c1, c2) -> Some F.(c1 + c2)
          | `Left c1 -> Some c1
          | `Right c2 -> Some c2)
    ; cst = F.(l1.cst + l2.cst)
    }
  ;;

  let assert_ge_annot l1 l2 =
    B.add_lprow
      M.man
      ~k:F.(l2.cst - l1.cst)
      (Lp_var_map.to_alist l1.coefs @ List.map (Lp_var_map.to_alist l2.coefs) ~f:(fun (v, c) -> v, F.(-c)))
      `Ge
  ;;

  let sub_annot l1 l2 =
    { coefs =
        Lp_var_map.merge l1.coefs l2.coefs ~f:(fun ~key:_ -> function
          | `Both (c1, c2) -> if F.(is_zero (c1 - c2)) then None else Some F.(c1 - c2)
          | `Left c1 -> Some c1
          | `Right c2 -> Some F.(-c2))
    ; cst = F.(l1.cst - l2.cst)
    }
  ;;

  let min_annot l1 l2 =
    if Lp_var_map.is_empty l1.coefs && Lp_var_map.is_empty l2.coefs
    then { coefs = Lp_var_map.empty; cst = F.(min l1.cst l2.cst) }
    else (
      let lpvar = new_lpvar () in
      B.add_lprow M.man ~k:F.(-l1.cst) ((lpvar, F.minus_one) :: Lp_var_map.to_alist l1.coefs) `Ge;
      B.add_lprow M.man ~k:F.(-l2.cst) ((lpvar, F.minus_one) :: Lp_var_map.to_alist l2.coefs) `Ge;
      { coefs = Lp_var_map.singleton lpvar F.one; cst = F.zero })
  ;;

  let assert_eq_annot l1 l2 =
    B.add_lprow
      M.man
      ~k:F.(l2.cst - l1.cst)
      (Lp_var_map.to_alist l1.coefs @ List.map (Lp_var_map.to_alist l2.coefs) ~f:(fun (v, c) -> v, F.(-c)))
      `Eq
  ;;

  let new_lpvar_for l =
    let lpvar = new_lpvar () in
    B.add_lprow M.man ~k:F.(-l.cst) ((lpvar, F.minus_one) :: Lp_var_map.to_alist l.coefs) `Eq;
    lpvar
  ;;

  let eval sol l = Lp_var_map.fold l.coefs ~init:l.cst ~f:(fun ~key:v ~data:c acc -> F.(acc + (c * sol v)))
end
