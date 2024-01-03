open Core
open Result.Let_syntax
open Pmaf
module N = Npa.Make (String)
module Parse = Arith_lang.Parse
module Ast = Arith_lang.Ast
module To_cfg = Arith_lang.To_cfg

exception File_not_found of string

let () =
  Caml.Printexc.register_printer (function
      | File_not_found filename -> Some ("File not found: " ^ filename)
      | Npa.Solver_error -> Some "Solver error"
      | _ -> None)
;;

let run ?bench filename =
  match Sys.file_exists filename with
  | `No | `Unknown -> Error (File_not_found filename)
  | `Yes ->
    In_channel.with_file filename ~f:(fun ch ->
        let lexbuf = Lexing.from_channel ch in
        Location.init lexbuf filename;
        Location.input_name := filename;
        Location.input_lexbuf := Some lexbuf;
        let%bind parsing_fun = Parse.program lexbuf in
        let prog = parsing_fun ~filename in
        let module V = struct
          let det_vars =
            List.filter_map prog.gvars ~f:(fun (typ, gvar) ->
                match typ with
                | `Int -> Some gvar.txt
                | _ -> None)
          ;;

          let rnd_vars =
            List.filter_map prog.gvars ~f:(fun (typ, gvar) ->
                match typ with
                | `Real -> Some gvar.txt
                | _ -> None)
          ;;

          type expr = Ast.expression
          type dist = Ast.distribution
          type cond = Ast.wedge

          let destruct_expr e =
            match e.Ast.exp_desc with
            | E_int i -> `Real (Mpqf.of_int i)
            | E_frac f -> `Real f
            | E_var x -> `Var x.txt
            | E_add (e1, e2) -> `Add [ e1; e2 ]
            | E_mul (e1, e2) -> `Mul [ e1; e2 ]
          ;;

          let destruct_dist d =
            match d.Ast.dist_desc with
            | D_categorical cats -> `Categorical cats
            | D_laplace (mu, b) -> `Laplace (mu, b)
            | D_normal (loc, scale) -> `Normal (loc, scale)
            | D_uniform (a, b) -> `Uniform (a, b)
          ;;

          let pp_cond fmt w =
            Format.pp_print_list
              ~pp_sep:(fun fmt () -> Format.fprintf fmt " /\\ ")
              (fun fmt c ->
                match c.Ast.cond_desc with
                | C_eq_zero e -> Format.fprintf fmt "%a == 0" Ast.pp_expression e
                | C_ge_zero e -> Format.fprintf fmt "%a >= 0" Ast.pp_expression e)
              fmt
              w.Ast.wedge_desc
          ;;

          let destruct_cond w =
            let f { Ast.cond_desc; _ } =
              match cond_desc with
              | C_eq_zero e -> `Eq ({ Ast.exp_desc = E_int 0; exp_loc = Location.none }, e)
              | C_ge_zero e -> `Leq ({ Ast.exp_desc = E_int 0; exp_loc = Location.none }, e)
            in
            match w.Ast.wedge_desc with
            | [] -> `Tru
            | [ c ] -> f c
            | cs -> `And (List.map cs ~f:(fun c -> { Ast.wedge_desc = [ c ]; wedge_loc = Location.none }))
          ;;
        end
        in
        let open Domain.Make (V) in
        let module N_symbolic = N.Newton_symbolic (D_symbolic) in
        let module To_path_exp =
          To_cfg.Make
            (String)
            (struct
              type t = D_symbolic.t
              type tst = D_symbolic.tst
              type flt = D_symbolic.flt

              let one = D.one
              let encode_assume = D.encode_assume
              let encode_assign = D.encode_assign
              let encode_sample = D.encode_sample
              let flt_of_mpqf _ = assert false
              let tst_of_wedges (w1, _) = w1
            end)
        in
        let eqns = To_path_exp.f_prog prog in
        let assert_post tr post =
          let phi = D.encode_cond post in
          let not_post = Srk.Syntax.rewrite srk ~down:(Srk.Syntax.nnf_rewriter srk) (Srk.Syntax.mk_not srk phi) in
          let pathcond = T.guard (T.mul tr (T.assume not_post)) in
          if match Srk.Wedge.is_sat srk pathcond with
             | `Unsat -> true
             | _ -> false
          then Format.printf "[TOPLEVEL] %a is a post-condition@." V.pp_cond post
          else Format.printf "[TOPLEVEL] cannot verify that %a is a post-condition@." V.pp_cond post
        in
        if Option.is_none bench then Format.printf "[TOPLEVEL] Analyzing %s ...@." (Filename.basename filename);
        if Option.is_none bench then Format.printf "[TOPLEVEL] Newton@.";
        let%bind sol, stat = Result.try_with (fun () -> N_symbolic.f ~max_iter:1 ~verbose:false eqns) in
        if Option.is_none bench then Format.printf "[TOPLEVEL] %a@." Npa.pp_stat stat;
        if Option.is_none bench
        then (
          List.iter (List.take sol 10) ~f:(fun (x, t) -> Format.printf "%s = %a@." x D.pp t);
          List.iter2_exn sol prog.procs ~f:(fun (_, t) proc ->
              Option.iter proc.proc_desc.ensures ~f:(fun phi -> assert_post t phi)));
        match bench with
        | None -> Ok ()
        | Some bench ->
          Format.printf "%s" (Yojson.Safe.to_string (Npa.stat_to_yojson stat));
          Out_channel.with_file bench ~f:(fun ch ->
              List.iter (List.take sol 10) ~f:(fun (x, t) ->
                  Format.fprintf (Format.formatter_of_out_channel ch) "%s = %a@." x D.pp t);
              Ok ()))
;;

let report_error exn =
  try
    Format.eprintf "%a" Location.report_exception exn;
    exit 1
  with
  | e ->
    Format.eprintf "%a@." Exn.pp e;
    exit 2
;;

let report_result result = Result.iter_error result ~f:report_error

let main () =
  let filename_param = Command.Param.(anon ("filename" %: Filename.arg_type)) in
  let bench_param = Command.Param.(flag "-bench" (optional Filename.arg_type) ~doc:" whether is for benchmark") in
  let driver =
    Command.group
      ~summary:"Expectation-recurrence Analysis"
      [ ( "analyze"
        , Command.basic
            ~summary:"analyze"
            Command.Let_syntax.(
              let%map_open filename = filename_param
              and bench = bench_param in
              fun () -> run filename ?bench |> report_result) )
      ]
  in
  Command.run driver
;;

let () = main ()
