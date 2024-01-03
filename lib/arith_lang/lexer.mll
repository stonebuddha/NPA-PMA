{
open Core
open Parser

let reserved_words =
  [ ("CATEGORICAL", CATEGORICAL)
  ; ("LAPLACE", LAPLACE)
  ; ("NORMAL", NORMAL)
  ; ("UNIFORM", UNIFORM)

  ; ("break", BREAK)
  ; ("continue", CONTINUE)
  ; ("else", ELSE)
  ; ("flip", FLIP)
  ; ("if", IF)
  ; ("int", INT)
  ; ("real", REAL)
  ; ("return", RETURN)
  ; ("void", VOID)
  ; ("while", WHILE)

  ; ("*", AST)
  ; (",", COMMA)
  ; ("=", EQ)
  ; ("==", EQEQ)
  ; (">=", GE)
  ; ("{", LCURLY)
  ; ("(", LPAREN)
  ; ("-", MINUS)
  ; ("+", PLUS)
  ; ("}", RCURLY)
  ; (")", RPAREN)
  ; (";", SEMI)

  ; ("//@assume", ASSUME)
  ; ("//@ensure", ENSURE) ]

let symbol_table = Hashtbl.of_alist_exn (module String) reserved_words

let update_loc lexbuf file line absolute chars =
  let pos = lexbuf.Lexing.lex_curr_p in
  let new_file = match file with None -> pos.pos_fname | Some s -> s in
  lexbuf.lex_curr_p <-
    { pos with
      pos_fname= new_file
    ; pos_lnum= (if absolute then line else pos.pos_lnum + line)
    ; pos_bol= pos.pos_cnum - chars }

exception Lex_error of string * Location.t

let error lexbuf msg = raise (Lex_error (msg, Location.curr lexbuf))

let () =
  Location.register_error_of_exn (function
      | Lex_error (msg, loc) -> Some (Location.errorf ~loc "%s" msg)
      | _ -> None)
}

let newline = ('\013'* '\010')
let blank = [' ' '\009' '\012']
let digit = ['0'-'9']
let lower = ['a'-'z']
let upper = ['A'-'Z']

let decimal_literal = digit+
let hex_literal = "0x" ['0'-'9' 'A'-'F' 'a'-'f']+
let int_literal = decimal_literal | hex_literal

rule token_exn = parse
  | newline
    { update_loc lexbuf None 1 false 0; token_exn lexbuf }
  | blank+
    { token_exn lexbuf }
  | (lower | upper | '_') (lower | upper | digit | '_')* as name
    { match Hashtbl.find symbol_table name with
      | Some kwd ->
          kwd
      | None ->
          ID name }
  | ('-'? int_literal) as lit
    { INTV (Int.of_string lit) }
  | (int_literal '/' int_literal) as lit
    { FRACV (Mpqf.of_string lit) }
  | "//@assume" | "//@ensure"
    { Hashtbl.find_exn symbol_table (Lexing.lexeme lexbuf) }
  | "//"
    { comment_exn lexbuf }
  | "==" | ">="
    { Hashtbl.find_exn symbol_table (Lexing.lexeme lexbuf) }
  | ['*' ',' '=' '{' '(' '-' '+' '}' ')' ';']
    { Hashtbl.find_exn symbol_table (Lexing.lexeme lexbuf) }
  | eof
    { EOF }
  | _ as illegal_char
    { error lexbuf ("illegal character (" ^ Char.escaped illegal_char ^ ")") }

and comment_exn = parse
  | newline
    { update_loc lexbuf None 1 false 0; token_exn lexbuf }
  | _
    { comment_exn lexbuf }
