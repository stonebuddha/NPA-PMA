open Core
open Cudd

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
  let man = Man.make_d ()
  let add_neg_op = Add.make_op1 Float.neg

  module Make_gauss_elim (S : sig
    val row_vars : Bdd.dt list
    val col_vars : Bdd.dt list
    val eye : Add.t
  end) =
  struct
    let fold_states_right ~(init : 'a) ~(f : Bdd.dt -> 'a -> 'a) vars =
      let rec aux acc bdd vars =
        match vars with
        | [] -> f bdd acc
        | h :: t ->
          let acc = aux acc (Bdd.dand bdd (Bdd.dnot h)) t in
          aux acc (Bdd.dand bdd h) t
      in
      aux init (Bdd.dtrue man) vars
    ;;

    let fold_states2_exn ~(init : 'a) ~(f : 'a -> Bdd.dt -> Bdd.dt -> 'a) vars1 vars2 =
      let rec aux acc bdd1 bdd2 vars1 vars2 =
        match vars1, vars2 with
        | [], [] -> f acc bdd1 bdd2
        | h1 :: t1, h2 :: t2 ->
          let acc = aux acc (Bdd.dand bdd1 h1) (Bdd.dand bdd2 h2) t1 t2 in
          aux acc (Bdd.dand bdd1 (Bdd.dnot h1)) (Bdd.dand bdd2 (Bdd.dnot h2)) t1 t2
        | _ -> raise (Invalid_argument "fold_states2_exn")
      in
      aux init (Bdd.dtrue man) (Bdd.dtrue man) vars1 vars2
    ;;

    let fold_states2_right_exn ~(init : 'a) ~(f : Bdd.dt -> Bdd.dt -> 'a -> 'a) vars1 vars2 =
      let rec aux acc bdd1 bdd2 vars1 vars2 =
        match vars1, vars2 with
        | [], [] -> f bdd1 bdd2 acc
        | h1 :: t1, h2 :: t2 ->
          let acc = aux acc (Bdd.dand bdd1 (Bdd.dnot h1)) (Bdd.dand bdd2 (Bdd.dnot h2)) t1 t2 in
          aux acc (Bdd.dand bdd1 h1) (Bdd.dand bdd2 h2) t1 t2
        | _ -> raise (Invalid_argument "fold_states2_exn")
      in
      aux init (Bdd.dtrue man) (Bdd.dtrue man) vars1 vars2
    ;;

    let gauss_elim lhs rhs =
      let phase_var = Bdd.newvar man in
      let mat = Add.ite phase_var lhs rhs in
      let gR = ref (Bdd.dfalse man) in
      let gC = ref (Bdd.dfalse man) in
      let all_rows = Queue.of_list (fold_states_right ~init:[] ~f:(fun row acc -> row :: acc) S.row_vars) in
      let find_next_row factor =
        let res =
          Queue.find_mapi all_rows ~f:(fun i row ->
              let cst = Add.dval (Add.cofactor factor row) in
              if Float.(abs cst >= 1e-12) then Some (i, cst, row) else None)
        in
        ignore (Queue.dequeue_exn all_rows : Bdd.dt);
        res
      in
      ( phase_var
      , fold_states2_exn
          ~init:mat
          ~f:(fun acc bdd_row bdd_col ->
            let r = Bdd.cube_of_bdd bdd_row in
            let c = Bdd.cube_of_bdd (Bdd.dand phase_var bdd_col) in
            match find_next_row (Add.cofactor acc c) with
            | Some (i, pivot, r') ->
              let acc =
                if i = 0
                then acc
                else (
                  let row1 = Add.cofactor acc r in
                  let row2 = Add.cofactor acc r' in
                  Add.ite r row2 (Add.ite r' row1 acc))
              in
              (* Format.printf "%a@.%a@.%g@." pb r pb c pivot; *)
              assert (Float.(abs pivot >= 1e-12));
              let gL = Add.ite !gR (Add.cst man 0.0) (Add.cofactor acc c) in
              let gU =
                let tmp = Add.ite !gC (Add.cst man 0.0) (Add.cofactor acc r) in
                Add.apply_op1 (Add.make_op1 (fun x -> x *. (1.0 /. pivot))) tmp
              in
              let delta = Add.mul gL gU in
              (* Format.printf "%a@." pa delta; *)
              let acc = Add.sub acc delta in
              let acc = Add.ite r gU acc in
              gR := Bdd.dor !gR r;
              gC := Bdd.dor !gC c;
              acc
            | None ->
              gR := Bdd.dor !gR r;
              gC := Bdd.dor !gC c;
              acc)
          S.row_vars
          S.col_vars )
    ;;

    let back_solve phase_var mat =
      let gR = ref (Bdd.dfalse man) in
      let gC = ref (Bdd.dfalse man) in
      let mat' =
        fold_states2_right_exn
          ~init:mat
          ~f:(fun bdd_row bdd_col acc ->
            let r = Bdd.cube_of_bdd bdd_row in
            let c = Bdd.cube_of_bdd (Bdd.dand phase_var bdd_col) in
            let pivot = Option.value_exn (Add.is_eval_cst acc (Bdd.dand r c)) in
            (* Format.printf "%a@.%a@.%g@." pb r pb c pivot; *)
            if Float.(abs pivot >= 1e-12)
            then (
              gR := Bdd.dor !gR r;
              let gL = Add.ite !gR (Add.cst man 0.0) (Add.cofactor acc c) in
              let gU = Add.ite !gC (Add.cst man 0.0) (Add.cofactor acc r) in
              let delta = Add.mul gL gU in
              (* Format.printf "%a@." pa delta; *)
              let acc = Add.sub acc delta in
              gC := Bdd.dor !gC c;
              acc)
            else (
              gR := Bdd.dor !gR r;
              gC := Bdd.dor !gC c;
              acc))
          S.row_vars
          S.col_vars
      in
      Add.cofactor mat' (Bdd.dnot phase_var)
    ;;

    let inverse add =
      let phase_var, mat = gauss_elim add S.eye in
      let sol = back_solve phase_var mat in
      sol
    ;;

    let star add = inverse (Add.sub S.eye add)
  end

  module Make_D (S : sig
    val name_of : int -> string
    val pre : Bdd.dt list
    val post : Bdd.dt list
    val encode_formula : V.formula -> Bdd.dt
    val encode_assign : string -> bool -> Add.t
    val name2pre : string -> Bdd.dt
    val name2post : string -> Bdd.dt
  end) =
  struct
    let pre = S.pre
    let post = S.post

    type t = Add.t

    let equal t1 t2 =
      Float.( < )
        (Add.sub t2 t1 |> Add.leaves |> Array.max_elt ~compare:Float.compare |> Option.value ~default:0.0)
        1e-12
    ;;

    type tst = V.formula
    type flt = float

    let pp = Add.print (fun fmt l -> String.pp fmt (S.name_of l)) (fun fmt f -> Format.fprintf fmt "%.6f" f)
    let pp_tst = V.pp_formula
    let pp_flt = Float.pp

    let extend =
      let intermediate = List.map2_exn pre post ~f:(fun _ _ -> Bdd.newvar man) in
      fun t1 t2 ->
        let t1' = List.fold2_exn post intermediate ~init:t1 ~f:(fun acc v' a -> Add.compose (Bdd.topvar v') a acc) in
        let t2' = List.fold2_exn pre intermediate ~init:t2 ~f:(fun acc v a -> Add.compose (Bdd.topvar v) a acc) in
        Add.matrix_multiply (Array.of_list_map intermediate ~f:Bdd.topvar) t1' t2'
    ;;

    let combine t1 t2 = Add.add t1 t2
    let subtract t1 t2 = Add.sub t1 t2
    let zero = Add.cst man 0.0

    let one =
      Add.ite
        (List.fold2_exn pre post ~init:(Bdd.dtrue man) ~f:(fun acc v v' -> Bdd.dand acc (Bdd.eq v v')))
        (Add.cst man 1.0)
        (Add.cst man 0.0)
    ;;

    let encode_formula = S.encode_formula
    let cond_combine f t1 t2 = Add.ite (encode_formula f) t1 t2

    let prob_combine p t1 t2 =
      let w1 = Add.cst man p in
      let w2 = Add.cst man Float.(1.0 - p) in
      Add.add (Add.mul w1 t1) (Add.mul w2 t2)
    ;;

    let ndet_combine t1 t2 = Add.min t1 t2
    let encode_assign = S.encode_assign
    let is_idempotent = false
    let name2pre = S.name2pre
    let name2post = S.name2post
  end

  module D = Make_D (struct
    let names = Int.Table.create ()
    let name_of = Int.Table.find_exn names
    let name2pre = String.Table.create ()
    let name2post = String.Table.create ()

    let pre =
      List.map V.vars ~f:(fun x ->
          let bdd = Bdd.newvar man in
          let l = Bdd.topvar bdd in
          Int.Table.add_exn names ~key:l ~data:x;
          String.Table.add_exn name2pre ~key:x ~data:bdd;
          bdd)
    ;;

    let post =
      List.map V.vars ~f:(fun x ->
          let bdd = Bdd.newvar man in
          let l = Bdd.topvar bdd in
          Int.Table.add_exn names ~key:l ~data:(x ^ "'");
          String.Table.add_exn name2post ~key:x ~data:bdd;
          bdd)
    ;;

    let encode_formula f =
      let rec aux f =
        match V.destruct_formula f with
        | `Tru -> Bdd.dtrue man
        | `Fls -> Bdd.dfalse man
        | `Var x -> String.Table.find_exn name2pre x
        | `And (f1, f2) -> Bdd.dand (aux f1) (aux f2)
        | `Or (f1, f2) -> Bdd.dor (aux f1) (aux f2)
        | `Not f0 -> Bdd.dnot (aux f0)
      in
      aux f
    ;;

    let encode_assign x b =
      Add.ite
        (List.fold V.vars ~init:(Bdd.dtrue man) ~f:(fun acc x' ->
             if String.(x = x')
             then
               Bdd.dand acc (Bdd.eq (String.Table.find_exn name2post x) (if b then Bdd.dtrue man else Bdd.dfalse man))
             else Bdd.dand acc (Bdd.eq (String.Table.find_exn name2pre x') (String.Table.find_exn name2post x'))))
        (Add.cst man 1.0)
        (Add.cst man 0.0)
    ;;

    let name2pre = String.Table.find_exn name2pre
    let name2post = String.Table.find_exn name2post
  end)

  module Lifted = Make_D (struct
    let names = Int.Table.create ()
    let name_of = Int.Table.find_exn names
    let name2pre = String.Table.create ()
    let name2post = String.Table.create ()

    let pre =
      List.map V.vars ~f:(fun x ->
          let bdd = Bdd.newvar man in
          let l = Bdd.topvar bdd in
          Int.Table.add_exn names ~key:l ~data:(x ^ "%d");
          String.Table.add_exn name2pre ~key:(x ^ "%d") ~data:bdd;
          bdd)
      @ List.map V.vars ~f:(fun x ->
            let bdd = Bdd.newvar man in
            let l = Bdd.topvar bdd in
            Int.Table.add_exn names ~key:l ~data:(x ^ "%u");
            String.Table.add_exn name2pre ~key:(x ^ "%u") ~data:bdd;
            bdd)
    ;;

    let post =
      List.map V.vars ~f:(fun x ->
          let bdd = Bdd.newvar man in
          let l = Bdd.topvar bdd in
          Int.Table.add_exn names ~key:l ~data:(x ^ "%d" ^ "'");
          String.Table.add_exn name2post ~key:(x ^ "%d") ~data:bdd;
          bdd)
      @ List.map V.vars ~f:(fun x ->
            let bdd = Bdd.newvar man in
            let l = Bdd.topvar bdd in
            Int.Table.add_exn names ~key:l ~data:(x ^ "%u" ^ "'");
            String.Table.add_exn name2post ~key:(x ^ "%u") ~data:bdd;
            bdd)
    ;;

    let encode_formula f =
      let rec aux f =
        match V.destruct_formula f with
        | `Tru -> Bdd.dtrue man
        | `Fls -> Bdd.dfalse man
        | `Var x -> String.Table.find_exn name2pre (x ^ "%d")
        | `And (f1, f2) -> Bdd.dand (aux f1) (aux f2)
        | `Or (f1, f2) -> Bdd.dor (aux f1) (aux f2)
        | `Not f0 -> Bdd.dnot (aux f0)
      in
      aux f
    ;;

    let encode_assign x b =
      Add.ite
        (List.fold V.vars ~init:(Bdd.dtrue man) ~f:(fun acc x' ->
             Bdd.dand
               (if String.(x = x')
               then
                 Bdd.dand
                   acc
                   (Bdd.eq (String.Table.find_exn name2post (x ^ "%d")) (if b then Bdd.dtrue man else Bdd.dfalse man))
               else
                 Bdd.dand
                   acc
                   (Bdd.eq (String.Table.find_exn name2pre (x' ^ "%d")) (String.Table.find_exn name2post (x' ^ "%d"))))
               (Bdd.eq (String.Table.find_exn name2pre (x' ^ "%u")) (String.Table.find_exn name2post (x' ^ "%u")))))
        (Add.cst man 1.0)
        (Add.cst man 0.0)
    ;;

    let name2pre = String.Table.find_exn name2pre
    let name2post = String.Table.find_exn name2post
  end)

  module Lifted_gauss_elim = Make_gauss_elim (struct
    let row_vars = Lifted.pre
    let col_vars = Lifted.post
    let eye = Lifted.one
  end)

  module Make_symbolic (D : sig
    include Pmaf.Sig.DOMAIN with type t = Add.t

    val encode_formula : V.formula -> Bdd.dt
    val name2pre : string -> Bdd.dt
    val name2post : string -> Bdd.dt
  end) =
  struct
    include D

    type t_non_symbolic = t
    type t_symbolic = (t * t) list Int.Map.t * t [@@deriving equal]
    type manager = (int * t_symbolic) list ref * t Int.Table.t

    let create_manager () : manager = ref [], Int.Table.create ()

    module Symbolic (M : sig
      val man : manager
    end) =
    struct
      type t = t_symbolic [@@deriving equal]
      type nonrec tst = tst
      type nonrec flt = flt

      let pp fmt (t : t_symbolic) =
        match t with
        | regs, c ->
          Format.fprintf
            fmt
            "%a + %a"
            pp
            c
            (Format.pp_print_list
               ~pp_sep:(fun fmt () -> Format.fprintf fmt " + ")
               (fun fmt (hole, coefs) ->
                 Format.pp_print_list
                   ~pp_sep:(fun fmt () -> Format.fprintf fmt " + ")
                   (fun fmt (coef1, coef2) -> Format.fprintf fmt "%a * [%d] * %a" pp coef1 hole pp coef2)
                   fmt
                   coefs))
            (Int.Map.to_alist regs)
      ;;

      let pp_tst = pp_tst
      let pp_flt = pp_flt

      let extend (t1 : t_symbolic) (t2 : t_symbolic) : t_symbolic =
        match t1, t2 with
        | (regs1, c1), (regs2, c2) when Int.Map.is_empty regs1 ->
          ( Int.Map.map regs2 ~f:(fun coefs -> List.map coefs ~f:(fun (coef1, coef2) -> extend c1 coef1, coef2))
          , extend c1 c2 )
        | (regs1, c1), (regs2, c2) when Int.Map.is_empty regs2 ->
          ( Int.Map.map regs1 ~f:(fun coefs -> List.map coefs ~f:(fun (coef1, coef2) -> coef1, extend coef2 c2))
          , extend c1 c2 )
        | _ -> raise (Invalid_argument "extend")
      ;;

      let extend_lin : t_symbolic -> t_symbolic -> t_symbolic = extend

      let combine (t1 : t_symbolic) (t2 : t_symbolic) : t_symbolic =
        match t1, t2 with
        | (regs1, c1), (regs2, c2) ->
          ( Int.Map.merge regs1 regs2 ~f:(fun ~key:_ -> function
              | `Both (coefs1, coefs2) -> Some (coefs1 @ coefs2)
              | `Left coefs1 -> Some coefs1
              | `Right coefs2 -> Some coefs2)
          , combine c1 c2 )
      ;;

      let subtract (t1 : t_symbolic) (t2 : t_symbolic) : t_symbolic =
        match t1, t2 with
        | (regs1, c1), (regs2, c2) ->
          ( Int.Map.merge regs1 regs2 ~f:(fun ~key:_ -> function
              | `Both (coefs1, coefs2) ->
                Some (coefs1 @ List.map coefs2 ~f:(fun (coef1, coef2) -> Add.apply_op1 add_neg_op coef1, coef2))
              | `Left coefs1 -> Some coefs1
              | `Right coefs2 -> Some (List.map coefs2 ~f:(fun (coef1, coef2) -> Add.apply_op1 add_neg_op coef1, coef2)))
          , subtract c1 c2 )
      ;;

      let zero : t_symbolic = Int.Map.empty, zero
      let one : t_symbolic = Int.Map.empty, one
      let embed (c : t_non_symbolic) : t_symbolic = Int.Map.empty, c

      let cond_combine f (t1 : t_symbolic) (t2 : t_symbolic) : t_symbolic =
        let f = encode_formula f in
        let g1 = Add.ite f D.one D.zero in
        let g2 = Add.ite (Bdd.dnot f) D.one D.zero in
        combine (extend (embed g1) t1) (extend (embed g2) t2)
      ;;

      let prob_combine p (t1 : t_symbolic) (t2 : t_symbolic) : t_symbolic =
        let w1 = Add.mul (Add.cst man p) D.one in
        let w2 = Add.mul (Add.cst man (1.0 -. p)) D.one in
        combine (extend (embed w1) t1) (extend (embed w2) t2)
      ;;

      let ndet_combine _ _ = raise (Invalid_argument "ndet_combine")
      let is_idempotent = false

      let fresh : unit -> t_symbolic =
        let counter = ref 0 in
        fun () ->
          Int.incr counter;
          Int.Map.singleton !counter [ D.one, D.one ], D.zero
      ;;

      let equalize (t1 : t_symbolic) (t2 : t_symbolic) =
        let extract (regs, c) =
          if Int.Map.length regs = 1 && D.equal c D.zero
          then (
            let hole, coefs = Int.Map.to_alist regs |> List.hd_exn in
            match coefs with
            | [ (coef1, coef2) ] when D.equal coef1 D.one && D.equal coef2 D.one -> Some hole
            | _ -> None)
          else None
        in
        match extract t1 with
        | Some h1 -> fst M.man := (h1, t2) :: !(fst M.man)
        | None ->
          (match extract t2 with
          | Some h2 -> fst M.man := (h2, t1) :: !(fst M.man)
          | None -> raise (Invalid_argument "equalize"))
      ;;

      let eval tbl (t : t_symbolic) : t_non_symbolic =
        match t with
        | regs, c ->
          let sol = Int.Table.find_exn tbl in
          Int.Map.fold regs ~init:c ~f:(fun ~key:hole ~data:coefs acc ->
              List.fold coefs ~init:acc ~f:(fun acc (coef1, coef2) ->
                  D.combine acc (D.extend (D.extend coef1 (sol hole)) coef2)))
      ;;

      let inst (t : t_symbolic) : t_non_symbolic = eval (snd M.man) t

      let lift (t : t_non_symbolic) : Lifted.t =
        List.fold V.vars ~init:t ~f:(fun acc x ->
            let xo = D.name2pre x in
            let xo' = D.name2post x in
            let xd = Lifted.name2pre (x ^ "%d") in
            let xd' = Lifted.name2post (x ^ "%d") in
            Add.compose (Bdd.topvar xo') xd' (Add.compose (Bdd.topvar xo) xd acc))
      ;;

      let trans (t : t_non_symbolic) : Lifted.t =
        List.fold V.vars ~init:t ~f:(fun acc x ->
            let xo = D.name2pre x in
            let xo' = D.name2post x in
            let xu = Lifted.name2pre (x ^ "%u") in
            let xu' = Lifted.name2post (x ^ "%u") in
            Add.compose (Bdd.topvar xo') xu (Add.compose (Bdd.topvar xo) xu' acc))
      ;;

      let tensor_trans (t1 : t_non_symbolic) (t2 : t_non_symbolic) : Lifted.t = Add.mul (lift t1) (trans t2)

      type lifted_t_symbolic = Lifted.t Int.Map.t * Lifted.t

      let lift_rhs (t : t_symbolic) : lifted_t_symbolic =
        match t with
        | regs, c ->
          ( Int.Map.map regs ~f:(fun coefs ->
                List.fold coefs ~init:Lifted.zero ~f:(fun acc (coef1, coef2) ->
                    Lifted.combine acc (tensor_trans coef1 coef2)))
          , tensor_trans D.one c )
      ;;

      let lifted_embed (c : Lifted.t) : lifted_t_symbolic = Int.Map.empty, c

      let lifted_extend (t1 : lifted_t_symbolic) (t2 : lifted_t_symbolic) : lifted_t_symbolic =
        match t1, t2 with
        | (regs1, c1), (regs2, c2) when Int.Map.is_empty regs1 ->
          Int.Map.map regs2 ~f:(fun coef -> Lifted.extend c1 coef), Lifted.extend c1 c2
        | _ -> raise (Invalid_argument "lifted_extend")
      ;;

      let lifted_combine (t1 : lifted_t_symbolic) (t2 : lifted_t_symbolic) : lifted_t_symbolic =
        match t1, t2 with
        | (regs1, c1), (regs2, c2) ->
          ( Int.Map.merge regs1 regs2 ~f:(fun ~key:_ -> function
              | `Both (coef1, coef2) -> Some (Lifted.combine coef1 coef2)
              | `Left coef1 -> Some coef1
              | `Right coef2 -> Some coef2)
          , Lifted.combine c1 c2 )
      ;;

      let subst ((regs, c) : lifted_t_symbolic) hole (dst : lifted_t_symbolic) =
        match Int.Map.find regs hole with
        | None -> regs, c
        | Some coef ->
          let lhs = Int.Map.remove regs hole, c in
          let rhs = lifted_extend (lifted_embed coef) dst in
          lifted_combine lhs rhs
      ;;

      let rearrange hole ((regs, c) : lifted_t_symbolic) =
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
          | Some (coef, rest) -> eqs.(i) <- x, lifted_extend (lifted_embed (Lifted_gauss_elim.star coef)) rest);
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

      let detensor_trans (t : Lifted.t) : t_non_symbolic =
        let tmp1 =
          Add.ite
            (List.fold V.vars ~init:(Bdd.dtrue man) ~f:(fun acc x ->
                 let xd' = Lifted.name2post (x ^ "%d") in
                 let xu' = Lifted.name2post (x ^ "%u") in
                 Bdd.dand acc (Bdd.eq xd' xu')))
            t
            (Add.cst man 0.0)
        in
        let tmp2 =
          Add.exist
            (List.fold V.vars ~init:(Bdd.dtrue man) ~f:(fun acc x ->
                 Bdd.dand (Bdd.dand acc (Lifted.name2post (x ^ "%d"))) (Lifted.name2post (x ^ "%u"))))
            tmp1
        in
        List.fold V.vars ~init:tmp2 ~f:(fun acc x ->
            let xo = D.name2pre x in
            let xo' = D.name2post x in
            let xd = Lifted.name2pre (x ^ "%d") in
            let xu = Lifted.name2pre (x ^ "%u") in
            Add.compose (Bdd.topvar xu) xo' (Add.compose (Bdd.topvar xd) xo acc))
      ;;

      let solve ~verbose _ =
        let lifted_eqns =
          List.map
            !(fst M.man)
            ~f:(fun (lhs, rhs) ->
              if verbose then Format.printf "%d = %a@." lhs pp rhs;
              lhs, lift_rhs rhs)
        in
        let lifted_sol = elim lifted_eqns in
        List.iter lifted_sol ~f:(fun (lhs, rhs) -> Int.Table.add_exn (snd M.man) ~key:lhs ~data:(detensor_trans rhs));
        true
      ;;
    end
  end

  module D_symbolic = Make_symbolic (D)
end
