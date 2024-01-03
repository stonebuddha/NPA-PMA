%{
open Ast

let make_loc (start_pos, end_pos) =
  { Location.loc_start = start_pos
  ; Location.loc_end = end_pos
  ; Location.loc_ghost = false
  }

let mk_proc ~loc proc_desc = { proc_desc; proc_loc = make_loc loc }
let mk_stmt ~loc stmt_desc = { stmt_desc; stmt_loc = make_loc loc }
let mk_exp ~loc exp_desc = { exp_desc; exp_loc = make_loc loc }
%}

%token BER              "BER"

%token BOOL             "bool"
%token BREAK            "break"
%token CONTINUE         "continue"
%token ELSE             "else"
%token FALSE            "false"
%token FLIP             "flip"
%token IF               "if"
%token RETURN           "return"
%token TRUE             "true"
%token VOID             "void"
%token WHILE            "while"

%token <Mpqf.t> FRACV   "1/2"   (* just an example *)
%token <string> ID      "ident" (* just an example *)

%token AMPAMP           "&&"
%token BANG             "!"
%token BARBAR           "||"
%token EQ               "="
%token LCURLY           "{"
%token LPAREN           "("
%token RCURLY           "}"
%token RPAREN           ")"
%token SEMI             ";"

%token EOF              ""

%nonassoc prec_if
%nonassoc ELSE
%left BARBAR
%left AMPAMP
%right BANG

%start program_exn
%type <filename:string -> Ast.program> program_exn

%%

%inline mk_proc(symb): symb { mk_proc ~loc:$sloc $1 }
%inline mk_stmt(symb): symb { mk_stmt ~loc:$sloc $1 }
%inline mk_exp(symb): symb { mk_exp ~loc:$sloc $1 }

program_exn:
  | list(global_var_decl) nonempty_list(procedure) EOF
    { fun ~filename -> { filename; gvars = $1; procs = $2 } }

global_var_decl:
  | BOOL ident SEMI
    { $2 }

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
  | ident EQ TRUE SEMI
    { S_assign ($1, true) }
  | ident EQ FALSE SEMI
    { S_assign ($1, false) }
  | ident EQ BER LPAREN FRACV RPAREN SEMI
    { S_sample_bernoulli ($1, $5) }
  | IF LPAREN expression RPAREN statement %prec prec_if
    { S_if ($3, $5, None) }
  | IF LPAREN expression RPAREN statement ELSE statement
    { S_if ($3, $5, Some $7) }
  | FLIP LPAREN FRACV RPAREN statement %prec prec_if
    { S_flip ($3, $5, None) }
  | FLIP LPAREN FRACV RPAREN statement ELSE statement
    { S_flip ($3, $5, Some $7) }
  | WHILE LPAREN expression RPAREN statement
    { S_while ($3, $5) }
  | RETURN SEMI
    { S_return }
  | LCURLY list(statement) RCURLY
    { S_block $2 }
  | BREAK SEMI
    { S_break }
  | CONTINUE SEMI
    { S_continue }
  | ident LPAREN RPAREN SEMI
    { S_call $1 }

expression:
  | LPAREN expression RPAREN
    { $2 }
  | mk_exp(expression_desc)
    { $1 }

expression_desc:
  | TRUE
    { E_true }
  | FALSE
    { E_false }
  | ident
    { E_var $1 }
  | expression AMPAMP expression
    { E_and ($1, $3) }
  | expression BARBAR expression
    { E_or ($1, $3) }
  | BANG expression
    { match $2.exp_desc with
      | E_true -> E_false
      | E_false -> E_true
      | _ -> E_not $2 }

%inline ident:
  | ID
    { Location.mkloc $1 (make_loc $sloc) }
