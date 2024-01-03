open Core

type 'a loc = 'a Location.loc =
  { txt : 'a
  ; loc : Location.t
  }

type ident = string loc

type expression =
  { exp_desc : expression_desc
  ; exp_loc : Location.t
  }

and expression_desc =
  | E_int of int
  | E_frac of Mpqf.t
  | E_var of ident
  | E_add of expression * expression
  | E_mul of expression * expression

let pp_expression fmt e =
  let rec aux fmt e =
    match e.exp_desc with
    | E_int i -> Format.fprintf fmt "%d" i
    | E_frac f -> Format.fprintf fmt "%a" Mpqf.print f
    | E_var x -> Format.fprintf fmt "%s" x.txt
    | E_add (e1, e2) -> Format.fprintf fmt "(%a + %a)" aux e1 aux e2
    | E_mul (e1, e2) -> Format.fprintf fmt "(%a * %a)" aux e1 aux e2
  in
  aux fmt e
;;

type distribution =
  { dist_desc : distribution_desc
  ; dist_loc : Location.t
  }

and distribution_desc =
  | D_categorical of (expression * expression) list
  | D_laplace of expression * expression
  | D_normal of expression * expression
  | D_uniform of expression * expression

type condition =
  { cond_desc : condition_desc
  ; cond_loc : Location.t
  }

and condition_desc =
  | C_eq_zero of expression
  | C_ge_zero of expression

type wedge =
  { wedge_desc : condition list
  ; wedge_loc : Location.t
  }

type statement =
  { stmt_desc : statement_desc
  ; stmt_loc : Location.t
  }

and statement_desc =
  | S_assume of wedge
  | S_assign of ident * expression
  | S_sample of ident * distribution
  | S_if of (wedge * statement list) * (wedge * statement list)
  | S_flip of Mpqf.t * statement * statement option
  | S_while of (wedge * statement list) * wedge
  | S_while_flip of Mpqf.t * statement list
  | S_return
  | S_block of statement list
  | S_break
  | S_continue
  | S_call of ident

type procedure =
  { proc_desc : procedure_desc
  ; proc_loc : Location.t
  }

and procedure_desc =
  { name : ident
  ; body : statement list
  ; ensures : wedge option
  }

type program =
  { filename : string
  ; gvars : ([ `Int | `Real ] * ident) list
  ; procs : procedure list
  }

let dump_prob ch p = Out_channel.fprintf ch "%s/%s" (Mpqf.get_num p |> Mpzf.to_string) (Mpqf.get_den p |> Mpzf.to_string)

let rec dump_expression ch { exp_desc; _ } =
  match exp_desc with
  | E_int i -> Out_channel.fprintf ch "%d" i
  | E_frac f -> Out_channel.fprintf ch "%s" (Mpqf.to_string f)
  | E_var x -> Out_channel.fprintf ch "%s" x.txt
  | E_add (e1, e2) -> Out_channel.fprintf ch "(%a + %a)" dump_expression e1 dump_expression e2
  | E_mul (e1, e2) -> Out_channel.fprintf ch "(%a * %a)" dump_expression e1 dump_expression e2
;;

let dump_distribution ch { dist_desc; _ } =
  match dist_desc with
  | D_categorical cats ->
    Out_channel.fprintf ch "CATEGORICAL(";
    List.iteri cats ~f:(fun i (e, p) ->
        if i > 0 then Out_channel.fprintf ch ", ";
        Out_channel.fprintf ch "%a, %a" dump_expression e dump_expression p);
    Out_channel.fprintf ch ")"
  | D_laplace (mu, b) -> Out_channel.fprintf ch "LAPLACE(%a, %a)" dump_expression mu dump_expression b
  | D_normal (loc, scale) -> Out_channel.fprintf ch "NORMAL(%a, %a)" dump_expression loc dump_expression scale
  | D_uniform (a, b) -> Out_channel.fprintf ch "UNIFORM(%a, %a)" dump_expression a dump_expression b
;;

let dump_condition ch { cond_desc; _ } =
  match cond_desc with
  | C_eq_zero e -> Out_channel.fprintf ch "%a == 0" dump_expression e
  | C_ge_zero e -> Out_channel.fprintf ch "%a >= 0" dump_expression e
;;

let dump_wedge ch { wedge_desc; _ } =
  List.iteri wedge_desc ~f:(fun i c ->
      if i > 0 then Out_channel.fprintf ch ", ";
      Out_channel.fprintf ch "%a" dump_condition c)
;;

let rec dump_statement ?(drop = false) l ch { stmt_desc; _ } =
  let tab l = String.init (l * 2) ~f:(fun _ -> ' ') in
  if not drop then Out_channel.fprintf ch "%s" (tab l);
  match stmt_desc with
  | S_assume w -> Out_channel.fprintf ch "//@assume %a;\n" dump_wedge w
  | S_assign (x, e) -> Out_channel.fprintf ch "%s = %a;\n" x.txt dump_expression e
  | S_sample (x, d) -> Out_channel.fprintf ch "%s = %a;\n" x.txt dump_distribution d
  | S_if ((w1, s1s), (w2, s2s)) ->
    Out_channel.fprintf ch "if {\n";
    Out_channel.fprintf ch "%s//@assume %a;\n" (tab (l + 1)) dump_wedge w1;
    dump_statements (l + 1) ch s1s;
    Out_channel.fprintf ch "%selse {\n" (tab l);
    Out_channel.fprintf ch "%s//@assume %a;\n" (tab (l + 1)) dump_wedge w2;
    dump_statements (l + 1) ch s2s;
    Out_channel.fprintf ch "%s}\n" (tab l)
  | S_flip (p, s1, s2_opt) ->
    Out_channel.fprintf ch "flip (%a) %a" dump_prob p (dump_statement ~drop:true l) s1;
    Option.iter s2_opt ~f:(fun s2 -> Out_channel.fprintf ch "%selse %a" (tab l) (dump_statement ~drop:true l) s2)
  | S_while ((w0, s0s), w1) ->
    Out_channel.fprintf ch "while {\n";
    Out_channel.fprintf ch "%s//@assume %a;\n" (tab (l + 1)) dump_wedge w0;
    dump_statements (l + 1) ch s0s;
    Out_channel.fprintf ch "%s}\n" (tab l);
    Out_channel.fprintf ch "%s//@assume %a;\n" (tab l) dump_wedge w1
  | S_while_flip (p, s0s) ->
    Out_channel.fprintf ch "while flip(%a) {\n" dump_prob p;
    dump_statements (l + 1) ch s0s;
    Out_channel.fprintf ch "%s}\n" (tab l)
  | S_return -> Out_channel.fprintf ch "return;\n"
  | S_block s0s ->
    Out_channel.fprintf ch "{\n";
    dump_statements (l + 1) ch s0s;
    Out_channel.fprintf ch "%s}\n" (tab l)
  | S_break -> Out_channel.fprintf ch "break;\n"
  | S_continue -> Out_channel.fprintf ch "continue;\n"
  | S_call x -> Out_channel.fprintf ch "%s();\n" x.txt

and dump_statements l ch = List.iter ~f:(fun s -> dump_statement l ch s)

let dump_procedure ch { proc_desc; _ } =
  match proc_desc.ensures with
  | None -> Out_channel.fprintf ch "void %s() {\n%a}\n" proc_desc.name.txt (dump_statements 1) proc_desc.body
  | Some ensures ->
    Out_channel.fprintf
      ch
      "void %s()\n//@ensures %a;\n{\n%a}\n"
      proc_desc.name.txt
      dump_wedge
      ensures
      (dump_statements 1)
      proc_desc.body
;;

let dump_program ?ch { filename; gvars; procs } =
  let f ch =
    List.iter gvars ~f:(fun (typ, gvar) ->
        Out_channel.fprintf
          ch
          "%s %s;\n"
          (match typ with
          | `Int -> "int"
          | `Real -> "real")
          gvar.txt);
    List.iteri procs ~f:(fun i proc ->
        if i > 0 || not (List.is_empty gvars) then Out_channel.fprintf ch "\n";
        dump_procedure ch proc)
  in
  match ch with
  | Some ch -> f ch
  | None -> Out_channel.with_file filename ~f
;;
