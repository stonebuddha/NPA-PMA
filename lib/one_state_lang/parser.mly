%{
open Ast

let make_loc (start_pos, end_pos) =
  { Location.loc_start = start_pos
  ; Location.loc_end = end_pos
  ; Location.loc_ghost = false
  }

let mk_proc ~loc proc_desc = { proc_desc; proc_loc = make_loc loc }
let mk_stmt ~loc stmt_desc = { stmt_desc; stmt_loc = make_loc loc }
%}

%token ELSE             "else"
%token FLIP             "flip"
%token NDET             "ndet"
%token RETURN           "return"
%token TICK             "tick"
%token VOID             "void"

%token <int> INTV       "42"    (* just an example *)
%token <Mpqf.t> FRACV   "1/2"   (* just an example *)
%token <string> ID      "ident" (* just an example *)

%token LCURLY           "{"
%token LPAREN           "("
%token RCURLY           "}"
%token RPAREN           ")"
%token SEMI             ";"

%token EOF              ""

%nonassoc prec_if
%nonassoc ELSE

%start program_exn
%type <filename:string -> Ast.program> program_exn

%%

%inline mk_proc(symb): symb { mk_proc ~loc:$sloc $1 }
%inline mk_stmt(symb): symb { mk_stmt ~loc:$sloc $1 }

program_exn:
  | nonempty_list(procedure) EOF
    { fun ~filename -> { filename; procs = $1 } }

procedure:
  | mk_proc(procedure_desc)
    { $1 }

procedure_desc:
  | VOID ident LPAREN RPAREN LCURLY list(statement) RCURLY
    { { name = $2; body = $6 } }

statement:
  | mk_stmt(statement_desc)
    { $1 }

statement_desc:
  | FLIP LPAREN FRACV RPAREN statement %prec prec_if
    { S_flip ($3, $5, None) }
  | FLIP LPAREN FRACV RPAREN statement ELSE statement
    { S_flip ($3, $5, Some $7) }
  | NDET statement %prec prec_if
    { S_ndet ($2, None) }
  | NDET statement ELSE statement
    { S_ndet ($2, Some $4) }
  | RETURN SEMI
    { S_return }
  | LCURLY list(statement) RCURLY
    { S_block $2 }
  | ident LPAREN RPAREN SEMI
    { S_call $1 }
  | TICK LPAREN INTV RPAREN SEMI
    { S_tick $3 }

%inline ident:
  | ID
    { Location.mkloc $1 (make_loc $sloc) }
