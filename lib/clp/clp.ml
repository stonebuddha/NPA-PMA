open Core

module F = struct
  type t = float

  let zero = Float.zero
  let one = Float.one
  let minus_one = Float.minus_one
  let infinity = Float.infinity
  let neg_infinity = Float.neg_infinity
  let abs = Float.abs
  let min = Float.min
  let max = Float.max
  let ( ~- ) = Float.( ~- )
  let ( + ) = Float.( + )
  let ( - ) = Float.( - )
  let ( * ) = Float.( * )
  let ( / ) = Float.( / )
  let ( >= ) = Float.( >= )
  let ( < ) = Float.( <= )
  let ( > ) = Float.( > )
  let ( <= ) = Float.( <= )
  let is_zero f = Float.(abs f < 1e-12)
  let of_int = Float.of_int
  let to_int = Float.to_int
  let of_float f = f
  let to_float f = f
  let of_mpq = Mpqf.to_float
  let to_mpq = Mpqf.of_float
  let pp = Float.pp
  let string_of_t = Float.to_string
end

type lp_manager =
  { ins : Stubs.t
  ; row_buf : Stubs.row array
  ; mutable row_cnt : int
  ; column_buf : Stubs.column array
  ; mutable column_cnt : int
  ; mutable column_idx : int
  ; mutable log_level : int
  }

type lp_var = int [@@deriving sexp, compare, hash, equal]

let pp_lp_var fmt lpvar = Format.fprintf fmt "v%d" lpvar
let dummy_row = { Stubs.row_lower = F.zero; row_upper = F.zero; row_elements = [||] }
let dummy_column = { Stubs.column_obj = F.zero; column_lower = F.zero; column_upper = F.zero; column_elements = [||] }
let max_rows = 1000
let max_columns = 1000

let rec flush_rows man =
  if man.row_cnt > 0
  then (
    flush_columns man;
    Stubs.add_rows man.ins man.row_buf man.row_cnt;
    man.row_cnt <- 0)

and flush_columns man =
  if man.column_cnt > 0
  then (
    Stubs.add_columns man.ins man.column_buf man.column_cnt;
    man.column_cnt <- 0)
;;

let create_lp_manager () =
  { ins = Stubs.create ()
  ; row_buf = Array.create ~len:max_rows dummy_row
  ; row_cnt = 0
  ; column_buf = Array.create ~len:max_columns dummy_column
  ; column_cnt = 0
  ; column_idx = 0
  ; log_level = 1
  }
;;

let reduce_coefs lst =
  let tbl = Hashtbl.Poly.create ~size:2 () in
  List.iter lst ~f:(fun (lpvar, coef) ->
      match Hashtbl.Poly.find tbl lpvar with
      | None -> Hashtbl.Poly.add_exn tbl ~key:lpvar ~data:coef
      | Some old_coef -> Hashtbl.Poly.set tbl ~key:lpvar ~data:F.(old_coef + coef));
  Hashtbl.Poly.fold tbl ~init:[] ~f:(fun ~key:lpvar ~data:coef acc -> (lpvar, coef) :: acc)
;;

let add_lprow man ?(k = F.zero) pairs o =
  let row =
    { Stubs.row_lower =
        (match o with
        | `Le -> F.neg_infinity
        | `Ge | `Eq -> k)
    ; row_upper =
        (match o with
        | `Ge -> F.infinity
        | `Le | `Eq -> k)
    ; row_elements = Array.of_list (reduce_coefs pairs)
    }
  in
  if man.row_cnt = max_rows then flush_rows man;
  man.row_buf.(man.row_cnt) <- row;
  man.row_cnt <- man.row_cnt + 1
;;

let new_lpvar ?(lower = F.neg_infinity) ?(upper = F.infinity) man =
  let column = { Stubs.column_obj = F.zero; column_lower = lower; column_upper = upper; column_elements = [||] } in
  let lpvar = man.column_idx in
  if man.column_cnt = max_columns then flush_columns man;
  man.column_buf.(man.column_cnt) <- column;
  man.column_cnt <- man.column_cnt + 1;
  man.column_idx <- man.column_idx + 1;
  lpvar
;;

let update_objective_coefficients man pairs =
  flush_rows man;
  flush_columns man;
  let obj = Stubs.objective_coefficients man.ins in
  List.iter (reduce_coefs pairs) ~f:(fun (idx, coef) -> obj.(idx) <- coef);
  Stubs.change_objective_coefficients man.ins obj
;;

let set_log_level man l = man.log_level <- l

let initial_solve man dir =
  flush_rows man;
  flush_columns man;
  (match dir with
  | `Maximize -> Stubs.set_direction man.ins Maximize
  | `Minimize -> Stubs.set_direction man.ins Minimize);
  Stubs.set_log_level man.ins man.log_level;
  Stubs.initial_solve man.ins
;;

let solve_primal man dir =
  flush_rows man;
  flush_columns man;
  (match dir with
  | `Maximize -> Stubs.set_direction man.ins Maximize
  | `Minimize -> Stubs.set_direction man.ins Minimize);
  Stubs.set_log_level man.ins man.log_level;
  Stubs.primal man.ins
;;

let primal_objective_value man = Stubs.objective_value man.ins

let primal_column_solution man =
  let sol = Stubs.primal_column_solution man.ins in
  fun i -> sol.(i)
;;

let status man =
  match Stubs.status man.ins with
  | Optimal | Suboptimal -> `Solved
  | _ -> `Failed
;;

let pp_stats fmt man =
  Format.fprintf
    fmt
    "lp rows: %d, lp columns: %d, lp non-zeros: %d"
    (Stubs.number_rows man.ins)
    (Stubs.number_columns man.ins)
    (Stubs.number_elements man.ins)
;;
