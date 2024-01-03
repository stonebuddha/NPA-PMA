%{
open Ast

exception Syntax_error of string * Location.t

let () =
  Location.register_error_of_exn (function
      | Syntax_error (msg, loc) -> Some (Location.errorf ~loc "%s" msg)
      | _ -> None)

let make_loc (start_pos, end_pos) =
  { Location.loc_start = start_pos
  ; Location.loc_end = end_pos
  ; Location.loc_ghost = false
  }

let mk_proc ~loc proc_desc = { proc_desc; proc_loc = make_loc loc }
let mk_stmt ~loc stmt_desc = { stmt_desc; stmt_loc = make_loc loc }
let mk_wedge ~loc wedge_desc = { wedge_desc; wedge_loc = make_loc loc }
let mk_cond ~loc cond_desc = { cond_desc; cond_loc = make_loc loc }
let mk_dist ~loc dist_desc = { dist_desc; dist_loc = make_loc loc }
let mk_exp ~loc exp_desc = { exp_desc; exp_loc = make_loc loc }
%}

%token CATEGORICAL      "CATEGORICAL"
%token LAPLACE          "LAPLACE"
%token NORMAL           "NORMAL"
%token UNIFORM          "UNIFORM"

%token BREAK            "break"
%token CONTINUE         "continue"
%token ELSE             "else"
%token FLIP             "flip"
%token IF               "if"
%token INT              "int"
%token REAL             "real"
%token RETURN           "return"
%token VOID             "void"
%token WHILE            "while"

%token <Mpqf.t> FRACV   "1/2"   (* just an example *)
%token <string> ID      "ident" (* just an example *)
%token <int>    INTV    "42"    (* just an example *)

%token AST              "*"
%token COMMA            ","
%token EQ               "="
%token EQEQ             "=="
%token GE               ">="
%token LCURLY           "{"
%token LPAREN           "("
%token MINUS            "-"
%token PLUS             "+"
%token RCURLY           "}"
%token RPAREN           ")"
%token SEMI             ";"

%token ASSUME           "//@assume"
%token ENSURE           "//@ensure"

%token EOF              ""

%nonassoc prec_if
%nonassoc ELSE
%left PLUS MINUS
%left AST

%start program_exn
%type <filename:string -> Ast.program> program_exn

%%

%inline mk_proc(symb): symb { mk_proc ~loc:$sloc $1 }
%inline mk_stmt(symb): symb { mk_stmt ~loc:$sloc $1 }
%inline mk_wedge(symb): symb { mk_wedge ~loc:$sloc $1 }
%inline mk_cond(symb): symb { mk_cond ~loc:$sloc $1 }
%inline mk_dist(symb): symb { mk_dist ~loc:$sloc $1 }
%inline mk_exp(symb): symb { mk_exp ~loc:$sloc $1 }

program_exn:
  | list(global_var_decl) nonempty_list(procedure) EOF
    { fun ~filename -> { filename; gvars = $1; procs = $2 } }

global_var_decl:
  | INT ident SEMI
    { (`Int, $2) }
  | REAL ident SEMI
    { (`Real, $2) }

procedure:
  | mk_proc(procedure_desc)
    { $1 }

procedure_desc:
  | VOID ident LPAREN RPAREN option(ensures) LCURLY list(statement) RCURLY
    { { name = $2; body = $7; ensures = $5 } }

ensures:
  | ENSURE wedge SEMI
    { $2 }

statement:
  | mk_stmt(statement_desc)
    { $1 }

statement_desc:
  | ASSUME wedge SEMI
    { S_assume $2 }
  | ident EQ expression SEMI
    { S_assign ($1, $3) }
  | ident EQ distribution SEMI
    { S_sample ($1, $3) }
  | IF LCURLY ASSUME wedge SEMI list(statement) RCURLY ELSE LCURLY ASSUME wedge SEMI list(statement) RCURLY
    { S_if (($4, $6), ($11, $13)) }
  | FLIP LPAREN FRACV RPAREN statement %prec prec_if
    { S_flip ($3, $5, None) }
  | FLIP LPAREN FRACV RPAREN statement ELSE statement
    { S_flip ($3, $5, Some $7) }
  | WHILE LCURLY ASSUME wedge SEMI list(statement) RCURLY ASSUME wedge SEMI
    { S_while (($4, $6), $9) }
  | WHILE FLIP LPAREN FRACV RPAREN LCURLY list(statement) RCURLY
    { S_while_flip ($4, $7) }
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

wedge:
  | mk_wedge(wedge_desc)
    { $1 }

wedge_desc:
  | separated_list(COMMA, condition)
    { $1 }

condition:
  | mk_cond(condition_desc)
    { $1 }

condition_desc:
  | expression EQEQ INTV
    { if $3 = 0 then C_eq_zero $1 else raise (Syntax_error ("non-zero right-hand side", make_loc $sloc)) }
  | expression GE INTV
    { if $3 = 0 then C_ge_zero $1 else raise (Syntax_error ("non-zero right-hand side", make_loc $sloc)) }

distribution:
  | mk_dist(distribution_desc)
    { $1 }

distribution_desc:
  | CATEGORICAL LPAREN separated_nonempty_list(COMMA, exp_prob) RPAREN
    { D_categorical $3 }
  | LAPLACE LPAREN expression COMMA expression RPAREN
    { D_laplace ($3, $5) }
  | NORMAL LPAREN expression COMMA expression RPAREN
    { D_normal ($3, $5) }
  | UNIFORM LPAREN expression COMMA expression RPAREN
    { D_uniform ($3, $5) }

exp_prob:
  | expression COMMA expression
    { ($1, $3) }

expression:
  | LPAREN expression RPAREN
    { $2 }
  | mk_exp(expression_desc)
    { $1 }

expression_desc:
  | INTV
    { E_int $1 }
  | FRACV
    { E_frac $1 }
  | ident
    { E_var $1 }
  | expression PLUS expression
    { E_add ($1, $3) }
  | expression MINUS expression
    { E_add ($1, { exp_desc = E_mul ({ exp_desc = E_int (-1); exp_loc = Location.none }, $3); exp_loc = Location.none }) }
  | expression AST expression
    { E_mul ($1, $3) }

%inline ident:
  | ID
    { Location.mkloc $1 (make_loc $sloc) }
