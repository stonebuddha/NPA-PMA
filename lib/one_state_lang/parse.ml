open Core
open Result.Let_syntax

exception Parse_error of string * Location.t

let token lexbuf = Result.try_with (fun () -> Lexer.token_exn lexbuf)

let rec loop lexbuf checkpoint =
  let module I = Parser.MenhirInterpreter in
  match checkpoint with
  | I.InputNeeded _ ->
    let%bind token = token lexbuf in
    let triple = token, lexbuf.Lexing.lex_start_p, lexbuf.Lexing.lex_curr_p in
    let checkpoint = I.offer checkpoint triple in
    loop lexbuf checkpoint
  | I.Shifting _ | I.AboutToReduce _ -> loop lexbuf (I.resume checkpoint)
  | I.Accepted v -> Ok v
  | I.Rejected ->
    let loc = Location.curr lexbuf in
    Error (Parse_error ("syntax error", loc))
  | I.HandlingError env ->
    let loc = Location.curr lexbuf in
    let state =
      match I.stack env with
      | (lazy Nil) -> 0
      | (lazy (Cons (I.Element (state, _, _, _), _))) -> I.number state
    in
    let msg = "syntax error (state " ^ Int.to_string state ^ ")" in
    Error (Parse_error (msg, loc))
;;

let wrap_menhir entry_exn lexbuf =
  Result.try_with (fun () ->
      Exn.protect
        ~f:(fun () ->
          let initial = entry_exn lexbuf.Lexing.lex_curr_p in
          let result = loop lexbuf initial in
          Result.ok_exn result)
        ~finally:(fun () -> Parsing.clear_parser ()))
;;

let program = wrap_menhir Parser.Incremental.program_exn

let () =
  Location.register_error_of_exn (function
      | Parse_error (msg, loc) -> Some (Location.errorf ~loc "%s" msg)
      | _ -> None)
;;
