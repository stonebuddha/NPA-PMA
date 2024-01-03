open Core
open Result.Let_syntax
open Pmaf
module N = Npa.Make (String)
module Parse = One_state_lang.Parse
module Ast = One_state_lang.Ast
module To_cfg = One_state_lang.To_cfg

exception File_not_found of string
exception Unknown_method of string

let () =
  Caml.Printexc.register_printer (function
      | File_not_found filename -> Some ("File not found: " ^ filename)
      | Unknown_method meth -> Some ("Unknown method: " ^ meth)
      | Npa.Solver_error -> Some "Solver error"
      | _ -> None)
;;

let run ?(bench = false) ?(meth = "K") ~degree filename =
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
          let k = degree
        end
        in
        let open Domain.Make (V) in
        let module K = N.Kleene (D) in
        let module N_naive = N.Newton (D) in
        let module N_symbolic = N.Newton_symbolic (D_symbolic (Clp)) in
        let module To_path_exp =
          To_cfg.Make
            (String)
            (struct
              include D

              let encode_reward c = D.reward (Float.of_int c)
              let flt_of_mpqf = Mpqf.to_float
            end)
        in
        let eqns = To_path_exp.f_prog prog in
        if not bench then Format.printf "[TOPLEVEL] Analyzing %s ...@." (Filename.basename filename);
        let%bind sol, stat =
          match meth with
          | "K" ->
            if not bench then Format.printf "[TOPLEVEL] Method: Kleene@.";
            Ok (K.f ~verbose:false eqns)
          | "NN" ->
            if not bench then Format.printf "[TOPLEVEL] Method: Newton (naive)@.";
            Result.try_with (fun () -> N_naive.f ~verbose:false eqns)
          | "N" ->
            if not bench then Format.printf "[TOPLEVEL] Method: Newton@.";
            Result.try_with (fun () -> N_symbolic.f ~verbose:false eqns)
          | _ -> Error (Unknown_method meth)
        in
        if not bench then Format.printf "[TOPLEVEL] %a@." Npa.pp_stat stat;
        if not bench
        then
          List.iter (List.take sol 10) ~f:(fun (x, rs) ->
              Format.printf
                "%s = (%a)@."
                x
                (Format.pp_print_list
                   ~pp_sep:(fun fmt () -> Format.fprintf fmt ", ")
                   (fun fmt f -> Format.fprintf fmt "%.8f" f))
                (Array.to_list rs));
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
  let meth_param = Command.Param.(flag "-method" (optional_with_default "K" string) ~doc:" method name (K, NN, N)") in
  let bench_param = Command.Param.(flag "-bench" no_arg ~doc:" whether is for benchmark") in
  let degree_param = Command.Param.(flag "-deg" (required int) ~doc:" degree of moments") in
  let driver =
    Command.group
      ~summary:"Higher-moment Analysis of Accumulated Rewards"
      [ ( "analyze"
        , Command.basic
            ~summary:"analyze"
            Command.Let_syntax.(
              let%map_open filename = filename_param
              and meth = meth_param
              and bench = bench_param
              and degree = degree_param in
              fun () -> run filename ~meth ~bench ~degree |> report_result) )
      ]
  in
  Command.run driver
;;

let () = main ()
