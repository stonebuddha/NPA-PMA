open Core
open Lp_utils

module Make (V : sig
  val vars : string list

  type expr
  type dist

  val destruct_expr : expr -> [ `Int of int | `Var of string | `Add of expr list | `Mul of expr list ]
  val destruct_dist : dist -> [ `Uniform of expr * expr ]
end) =
struct
  type typ =
    [ `Eq
    | `Le
    ]
  [@@deriving equal]

  let combine_typ = function
    | `Eq, `Eq -> `Eq
    | `Eq, `Le | `Le, `Eq | `Le, `Le -> `Le
  ;;

  let subtract_typ = function
    | `Eq, `Eq -> `Eq
    | `Eq, `Le -> assert false
    | `Le, `Eq -> `Le
    | `Le, `Le -> `Eq
  ;;

  module Abs_term = struct
    type 'a t =
      { coefs : 'a String.Map.t
      ; cst : 'a
      }
    [@@deriving equal]

    let pp ?iszero f fmt { coefs; cst } =
      let iszero =
        match iszero with
        | Some g -> g
        | None -> fun _ -> false
      in
      Format.pp_print_list
        ~pp_sep:(fun fmt () -> Format.fprintf fmt " + ")
        (fun fmt (x, coef) -> Format.fprintf fmt "%a * %s" f coef x)
        fmt
        (String.Map.to_alist coefs |> List.filter ~f:(fun (_, coef) -> not (iszero coef)));
      if not (iszero cst)
      then (
        if not (String.Map.is_empty coefs) then Format.fprintf fmt " + ";
        Format.fprintf fmt "%a" f cst)
    ;;

    let merge f { coefs = coefs1; cst = cst1 } { coefs = coefs2; cst = cst2 } =
      { coefs =
          String.Map.merge coefs1 coefs2 ~f:(fun ~key:_ -> function
            | `Both (coef1, coef2) -> Some (f coef1 coef2)
            | _ -> assert false)
      ; cst = f cst1 cst2
      }
    ;;

    let of_cst ~zero cst = { coefs = String.Map.of_alist_exn (List.map V.vars ~f:(fun x -> x, zero)); cst }
    let of_coefs coefs cst = { coefs; cst }

    let of_coef_list ~zero coef_list cst =
      let partial_coefs = String.Map.of_alist_exn coef_list in
      { coefs =
          String.Map.of_alist_exn
            (List.map V.vars ~f:(fun x -> x, String.Map.find partial_coefs x |> Option.value ~default:zero))
      ; cst
      }
    ;;

    let subst ~mul ~add sub_of { coefs; cst } =
      let delta_coefss, delta_csts =
        List.filter_map V.vars ~f:(fun x ->
            match sub_of x with
            | None -> None
            | Some sub ->
              let coef_x = String.Map.find_exn coefs x in
              let delta_coefs = String.Map.map sub.coefs ~f:(fun sub_coef -> mul coef_x sub_coef) in
              let delta_cst = mul coef_x sub.cst in
              Some (delta_coefs, delta_cst))
        |> List.unzip
      in
      { coefs =
          List.fold
            delta_coefss
            ~init:
              (List.fold V.vars ~init:coefs ~f:(fun coefs x ->
                   if Option.is_some (sub_of x) then String.Map.remove coefs x else coefs))
            ~f:(fun coefs delta_coefs ->
              String.Map.merge coefs delta_coefs ~f:(fun ~key:_ -> function
                | `Both (coef, delta) -> Some (add coef delta)
                | `Left coef -> Some coef
                | `Right delta -> Some delta))
      ; cst = List.fold delta_csts ~init:cst ~f:add
      }
    ;;

    let map f { coefs; cst } = { coefs = String.Map.map ~f coefs; cst = f cst }

    let iter f { coefs; cst } =
      String.Map.iter ~f coefs;
      f cst
    ;;

    let iter2 f { coefs = coefs1; cst = cst1 } { coefs = coefs2; cst = cst2 } =
      String.Map.iter2 coefs1 coefs2 ~f:(fun ~key:_ ~data ->
          match data with
          | `Both (coef1, coef2) -> f coef1 coef2
          | _ -> assert false);
      f cst1 cst2
    ;;
  end

  type term = float Abs_term.t [@@deriving equal]

  let pp_term = Abs_term.pp ~iszero:(fun f -> Float.(abs f < 1e-8)) (fun fmt f -> Format.fprintf fmt "%g" f)
  let add_term = Abs_term.merge Float.add
  let sub_term = Abs_term.merge Float.sub
  let mul_term t1 t2 = Abs_term.map (fun coef -> Float.(t1.Abs_term.cst * coef)) t2
  let term_of_cst = Abs_term.of_cst ~zero:0.0
  let term_of_coef_list = Abs_term.of_coef_list ~zero:0.0

  type wedge = (typ * V.expr) list

  module D = struct
    type t = (typ * term) String.Map.t [@@deriving equal]
    type tst = wedge * wedge
    type flt = int * int

    let pp fmt t =
      Format.fprintf fmt "{";
      Format.pp_print_list
        ~pp_sep:(fun fmt () -> Format.fprintf fmt ", ")
        (fun fmt (x, (typ, rhs)) ->
          Format.fprintf
            fmt
            "%s' %s %a"
            x
            (match typ with
            | `Eq -> "="
            | `Le -> "<=")
            pp_term
            rhs)
        fmt
        (String.Map.to_alist t);
      Format.fprintf fmt "}"
    ;;

    let pp_tst fmt _ = Format.fprintf fmt "[tst]"
    let pp_flt fmt (a, b) = Format.fprintf fmt "[%d,%d]" a b
    let subst sub_of dst = Abs_term.subst ~mul:Float.( * ) ~add:Float.( + ) sub_of dst

    let extend t1 t2 =
      String.Map.map t2 ~f:(fun (typ, rhs) ->
          let typ' =
            match typ with
            | `Le -> `Le
            | `Eq ->
              if List.exists V.vars ~f:(fun x ->
                     match fst (String.Map.find_exn t1 x) with
                     | `Le -> true
                     | `Eq -> false)
              then `Le
              else `Eq
          in
          let rhs' = subst (fun x -> Some (snd (String.Map.find_exn t1 x))) rhs in
          typ', rhs')
    ;;

    let combine t1 t2 =
      String.Map.merge t1 t2 ~f:(fun ~key:_ -> function
        | `Both ((typ1, rhs1), (typ2, rhs2)) -> Some (combine_typ (typ1, typ2), add_term rhs1 rhs2)
        | _ -> assert false)
    ;;

    let subtract t1 t2 =
      String.Map.merge t1 t2 ~f:(fun ~key:_ -> function
        | `Both ((typ1, rhs1), (typ2, rhs2)) -> Some (subtract_typ (typ1, typ2), sub_term rhs1 rhs2)
        | _ -> assert false)
    ;;

    (* FIXME: why Eq does not work *)
    let zero = String.Map.of_alist_exn (List.map V.vars ~f:(fun x -> x, (`Le, term_of_cst 0.0)))

    (* FIXME: why Eq does not work *)
    let one = String.Map.of_alist_exn (List.map V.vars ~f:(fun x -> x, (`Le, term_of_coef_list [ x, 1.0 ] 0.0)))

    let cond_combine _ t1 t2 =
      String.Map.merge t1 t2 ~f:(fun ~key:_ -> function
        | `Both ((typ1, rhs1), (typ2, rhs2)) -> Some (combine_typ (typ1, typ2), Abs_term.merge Float.max rhs1 rhs2)
        | _ -> assert false)
    ;;

    let prob_combine (a, b) t1 t2 =
      let p1 = Float.(of_int a / of_int Int.(a + b)) in
      let p2 = Float.(of_int b / of_int Int.(a + b)) in
      String.Map.merge t1 t2 ~f:(fun ~key:_ -> function
        | `Both ((typ1, rhs1), (typ2, rhs2)) ->
          Some
            ( combine_typ (typ1, typ2)
            , Abs_term.merge
                Float.( + )
                (Abs_term.map (fun x -> Float.(p1 * x)) rhs1)
                (Abs_term.map (fun x -> Float.(p2 * x)) rhs2) )
        | _ -> assert false)
    ;;

    let ndet_combine _ _ = raise (Invalid_argument "ndet_combine")
    let is_idempotent = false

    let rec encode_expr e =
      match V.destruct_expr e with
      | `Int i -> term_of_cst (Float.of_int i)
      | `Var x -> term_of_coef_list [ x, 1.0 ] 0.0
      | `Add es -> List.fold es ~init:(term_of_cst 0.0) ~f:(fun acc e -> add_term acc (encode_expr e))
      | `Mul [ e0; e1 ] ->
        (match V.destruct_expr e0 with
        | `Int i -> Abs_term.map (fun coef -> Float.(of_int i * coef)) (encode_expr e1)
        | _ -> assert false)
      | `Mul _ -> assert false
    ;;

    let encode_assign on e =
      String.Map.of_alist_exn
        (List.map V.vars ~f:(fun x ->
             x, (`Eq, if String.(x = on) then encode_expr e else term_of_coef_list [ x, 1.0 ] 0.0)))
    ;;

    let encode_dist d =
      match V.destruct_dist d with
      | `Uniform (a, b) -> mul_term (term_of_cst 0.5) (add_term (encode_expr a) (encode_expr b))
    ;;

    let encode_sample on d =
      String.Map.of_alist_exn
        (List.map V.vars ~f:(fun x ->
             x, (`Eq, if String.(x = on) then encode_dist d else term_of_coef_list [ x, 1.0 ] 0.0)))
    ;;
  end

  module D_symbolic (B : Annot.BACKEND) = struct
    type t = (typ * term) String.Map.t [@@deriving equal]
    type tst = wedge * wedge
    type flt = int * int

    let pp = D.pp
    let pp_tst fmt _ = Format.fprintf fmt "[tst]"
    let pp_flt fmt (a, b) = Format.fprintf fmt "[%d,%d]" a b

    let combine t1 t2 =
      String.Map.merge t1 t2 ~f:(fun ~key:_ -> function
        | `Both ((typ1, rhs1), (typ2, rhs2)) -> Some (combine_typ (typ1, typ2), add_term rhs1 rhs2)
        | _ -> assert false)
    ;;

    let subtract t1 t2 =
      String.Map.merge t1 t2 ~f:(fun ~key:_ -> function
        | `Both ((typ1, rhs1), (typ2, rhs2)) -> Some (subtract_typ (typ1, typ2), sub_term rhs1 rhs2)
        | _ -> assert false)
    ;;

    (* FIXME: why Eq does not work *)
    let zero = String.Map.of_alist_exn (List.map V.vars ~f:(fun x -> x, (`Le, term_of_cst 0.0)))
    let is_idempotent = false

    type t_non_symbolic = t

    include Annot.Linexpr (B)

    type sterm = linexpr Abs_term.t [@@deriving equal]

    let pp_sterm = Abs_term.pp pp_linexpr

    type t_symbolic = (typ * sterm) String.Map.t [@@deriving equal]
    type manager = B.lp_manager

    let create_manager () = B.create_lp_manager ()

    module Symbolic (M : sig
      val man : manager
    end) =
    struct
      include Annot.Make (B) (M)

      let add_sterm = Abs_term.merge add_annot
      let sub_sterm = Abs_term.merge sub_annot
      let sterm_of_cst = Abs_term.of_cst ~zero:(const_annot F.zero)
      let sterm_of_coef_list = Abs_term.of_coef_list ~zero:(const_annot F.zero)
      let scale_sterm p = Abs_term.map (scale_annot p)

      type t = t_symbolic [@@deriving equal]
      type nonrec tst = tst
      type nonrec flt = flt

      let pp fmt t =
        Format.fprintf fmt "{";
        Format.pp_print_list
          ~pp_sep:(fun fmt () -> Format.fprintf fmt ", ")
          (fun fmt (x, (typ, rhs)) ->
            Format.fprintf
              fmt
              "%s %s %a"
              x
              (match typ with
              | `Eq -> "="
              | `Le -> "<=")
              pp_sterm
              rhs)
          fmt
          (String.Map.to_alist t);
        Format.fprintf fmt "}"
      ;;

      let pp_tst = pp_tst
      let pp_flt = pp_flt
      let subst sub_of dst = Abs_term.subst ~mul:mul_annot ~add:add_annot sub_of dst

      let extend t1 t2 =
        String.Map.map t2 ~f:(fun (typ, rhs) ->
            let typ' =
              match typ with
              | `Le -> `Le
              | `Eq ->
                if List.exists V.vars ~f:(fun x ->
                       match fst (String.Map.find_exn t1 x) with
                       | `Le -> true
                       | `Eq -> false)
                then `Le
                else `Eq
            in
            let rhs' = subst (fun x -> Some (snd (String.Map.find_exn t1 x))) rhs in
            typ', rhs')
      ;;

      let extend_lin t1 t2 =
        String.Map.map t2 ~f:(fun (typ, rhs) ->
            let typ' =
              match typ with
              | `Le -> `Le
              | `Eq ->
                if List.exists V.vars ~f:(fun x ->
                       match fst (String.Map.find_exn t1 x) with
                       | `Le -> true
                       | `Eq -> false)
                then `Le
                else `Eq
            in
            let rhs' = subst (fun x -> Some (snd (String.Map.find_exn t1 x))) { rhs with cst = const_annot F.zero } in
            typ', rhs')
      ;;

      let combine t1 t2 =
        String.Map.merge t1 t2 ~f:(fun ~key:_ -> function
          | `Both ((typ1, rhs1), (typ2, rhs2)) -> Some (combine_typ (typ1, typ2), add_sterm rhs1 rhs2)
          | _ -> assert false)
      ;;

      let subtract t1 t2 =
        String.Map.merge t1 t2 ~f:(fun ~key:_ -> function
          | `Both ((typ1, rhs1), (typ2, rhs2)) -> Some (subtract_typ (typ1, typ2), sub_sterm rhs1 rhs2)
          | _ -> assert false)
      ;;

      (* FIXME: why Eq does not work *)
      let zero = String.Map.of_alist_exn (List.map V.vars ~f:(fun x -> x, (`Le, sterm_of_cst (const_annot F.zero))))

      (* FIXME: why Eq does not work *)
      let one =
        String.Map.of_alist_exn
          (List.map V.vars ~f:(fun x -> x, (`Le, sterm_of_coef_list [ x, const_annot F.one ] (const_annot F.zero))))
      ;;

      let embed_term rhs = Abs_term.map (fun coef -> const_annot (F.of_float coef)) rhs
      let equalize_term rhs1 rhs2 = Abs_term.iter2 assert_eq_annot rhs1 rhs2

      let equalize t1 t2 =
        String.Map.iter2 t1 t2 ~f:(fun ~key:_ ~data ->
            match data with
            | `Both ((_, rhs1), (_, rhs2)) -> equalize_term rhs1 rhs2
            | _ -> assert false)
      ;;

      let weaken w t =
        let w = List.map w ~f:(fun (typ, e) -> typ, D.encode_expr e) in
        let w = List.fold V.vars ~init:w ~f:(fun acc x -> (`Le, term_of_coef_list [ x, 1.0 ] 0.0) :: acc) in
        let w = (`Le, term_of_cst 1.0) :: w in
        List.fold w ~init:t ~f:(fun acc (typ, hint) ->
            let hint = embed_term hint in
            String.Map.map acc ~f:(fun (_, rhs) ->
                let tmp =
                  match typ with
                  | `Le -> new_nonneg_annot ()
                  | `Eq -> new_annot ()
                in
                let delta = Abs_term.map (mul_annot tmp) hint in
                `Le, add_sterm rhs delta))
      ;;

      let fresh () =
        String.Map.of_alist_exn
          (List.map V.vars ~f:(fun x ->
               let rhs =
                 Abs_term.of_coefs
                   (String.Map.of_alist_exn (List.map V.vars ~f:(fun y -> y, new_annot ())))
                   (new_annot ())
               in
               x, (`Le, rhs)))
      ;;

      let cond_combine (w1, w2) t1 t2 =
        let res = fresh () in
        equalize res (weaken w1 t1);
        equalize res (weaken w2 t2);
        res
      ;;

      let prob_combine (a, b) t1 t2 =
        let p1 = F.(of_int a / of_int Int.(a + b)) in
        let p2 = F.(of_int b / of_int Int.(a + b)) in
        String.Map.merge t1 t2 ~f:(fun ~key:_ -> function
          | `Both ((typ1, rhs1), (typ2, rhs2)) ->
            Some (combine_typ (typ1, typ2), add_sterm (scale_sterm p1 rhs1) (scale_sterm p2 rhs2))
          | _ -> assert false)
      ;;

      let ndet_combine _ _ = raise (Invalid_argument "ndet_combine")
      let is_idempotent = false
      let embed t = String.Map.map t ~f:(fun (typ, rhs) -> typ, embed_term rhs)

      let solve ~verbose targets =
        List.iter targets ~f:(fun t ->
            String.Map.iter t ~f:(fun (_, rhs) ->
                Abs_term.iter (fun l -> B.update_objective_coefficients M.man [ new_lpvar_for l, F.one ]) rhs));
        B.set_log_level M.man 0;
        B.initial_solve M.man `Minimize;
        if verbose then Format.eprintf "[INFO] %a@." B.pp_stats M.man;
        match B.status M.man with
        | `Solved -> true
        | _ -> false
      ;;

      let inst t =
        String.Map.map t ~f:(fun (typ, rhs) ->
            typ, Abs_term.map (fun coef -> F.to_float (eval (B.primal_column_solution M.man) coef)) rhs)
      ;;
    end
  end
end
