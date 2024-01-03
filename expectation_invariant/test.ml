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

let run ?(bench = false) filename =
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
          let vars = List.map prog.gvars ~f:(fun (_, gvar) -> gvar.txt)

          type expr = Ast.expression
          type dist = Ast.distribution

          let destruct_expr e =
            match e.Ast.exp_desc with
            | E_int i -> `Int i
            | E_frac _ -> assert false
            | E_var x -> `Var x.txt
            | E_add (e1, e2) -> `Add [ e1; e2 ]
            | E_mul (e1, e2) -> `Mul [ e1; e2 ]
          ;;

          let destruct_dist d =
            match d.Ast.dist_desc with
            | D_uniform (a, b) -> `Uniform (a, b)
            | _ -> assert false
          ;;
        end
        in
        let open Domain.Make (V) in
        let module K = N.Kleene (D) in
        let module D_symbolic = D_symbolic (Clp) in
        let module N_symbolic = N.Newton_symbolic (D_symbolic) in
        let module To_path_exp =
          To_cfg.Make
            (String)
            (struct
              type t = D_symbolic.t
              type tst = D_symbolic.tst
              type flt = D_symbolic.flt

              let one = D.one
              let encode_assume _ = assert false
              let encode_assign = D.encode_assign
              let encode_sample = D.encode_sample

              let flt_of_mpqf p =
                let num = Mpqf.get_num p |> Mpzf.to_string |> Int.of_string in
                let den = Mpqf.get_den p |> Mpzf.to_string |> Int.of_string in
                num, den - num
              ;;

              let tst_of_wedges (w1, w2) =
                let f c =
                  match c.Ast.cond_desc with
                  | Ast.C_eq_zero e -> `Eq, e
                  | C_ge_zero e -> `Le, e
                in
                List.map w1.Ast.wedge_desc ~f, List.map w2.Ast.wedge_desc ~f
              ;;
            end)
        in
        let eqns = To_path_exp.f_prog prog in
        if not bench then Format.printf "[TOPLEVEL] Analyzing %s ...@." (Filename.basename filename);
        if not bench then Format.printf "[TOPLEVEL] Newton@.";
        let%bind sol, stat = Result.try_with (fun () -> N_symbolic.f ~max_iter:64 ~verbose:false eqns) in
        if not bench then Format.printf "[TOPLEVEL] %a@." Npa.pp_stat stat;
        if not bench
        then List.iter (List.take sol 10) ~f:(fun (x, t) -> Format.printf "%s = %a@." x D.pp t)
        else Format.printf "%a@." D.pp (snd (List.hd_exn sol));
        if bench then Format.printf "%s" (Yojson.Safe.to_string (Npa.stat_to_yojson stat));
        Ok ())
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
  let bench_param = Command.Param.(flag "-bench" no_arg ~doc:" whether is for benchmark") in
  let driver =
    Command.group
      ~summary:"Expectation-invariant Analysis"
      [ ( "analyze"
        , Command.basic
            ~summary:"analyze"
            Command.Let_syntax.(
              let%map_open filename = filename_param
              and bench = bench_param in
              fun () -> run filename ~bench |> report_result) )
      ]
  in
  Command.run driver
;;

let () = main ()
