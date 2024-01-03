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
  | E_true
  | E_false
  | E_var of ident
  | E_and of expression * expression
  | E_or of expression * expression
  | E_not of expression

let pp_expression fmt e =
  let rec aux fmt e =
    match e.exp_desc with
    | E_true -> Format.fprintf fmt "true"
    | E_false -> Format.fprintf fmt "false"
    | E_var x -> Format.fprintf fmt "%s" x.txt
    | E_and (e1, e2) -> Format.fprintf fmt "(%a && %a)" aux e1 aux e2
    | E_or (e1, e2) -> Format.fprintf fmt "(%a || %a)" aux e1 aux e2
    | E_not e0 -> Format.fprintf fmt "(!%a)" aux e0
  in
  aux fmt e
;;

type statement =
  { stmt_desc : statement_desc
  ; stmt_loc : Location.t
  }

and statement_desc =
  | S_assign of ident * bool
  | S_sample_bernoulli of ident * Mpqf.t
  | S_if of expression * statement * statement option
  | S_flip of Mpqf.t * statement * statement option
  | S_while of expression * statement
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
  }

type program =
  { filename : string
  ; gvars : ident list
  ; procs : procedure list
  }

let dump_prob ch p = Out_channel.fprintf ch "%s/%s" (Mpqf.get_num p |> Mpzf.to_string) (Mpqf.get_den p |> Mpzf.to_string)

let rec dump_expression ch { exp_desc; _ } =
  match exp_desc with
  | E_true -> Out_channel.fprintf ch "true"
  | E_false -> Out_channel.fprintf ch "false"
  | E_var x -> Out_channel.fprintf ch "%s" x.txt
  | E_and (e1, e2) -> Out_channel.fprintf ch "(%a && %a)" dump_expression e1 dump_expression e2
  | E_or (e1, e2) -> Out_channel.fprintf ch "(%a || %a)" dump_expression e1 dump_expression e2
  | E_not e0 -> Out_channel.fprintf ch "(!%a)" dump_expression e0
;;

let rec dump_statement ?(drop = false) l ch { stmt_desc; _ } =
  let tab l = String.init (l * 2) ~f:(fun _ -> ' ') in
  if not drop then Out_channel.fprintf ch "%s" (tab l);
  match stmt_desc with
  | S_assign (x, b) -> Out_channel.fprintf ch "%s = %s;\n" x.txt (if b then "true" else "false")
  | S_sample_bernoulli (x, p) -> Out_channel.fprintf ch "%s = BER(%a);\n" x.txt dump_prob p
  | S_if (e, s1, s2_opt) ->
    Out_channel.fprintf ch "if (%a) %a" dump_expression e (dump_statement ~drop:true l) s1;
    Option.iter s2_opt ~f:(fun s2 -> Out_channel.fprintf ch "%selse %a" (tab l) (dump_statement ~drop:true l) s2)
  | S_flip (p, s1, s2_opt) ->
    Out_channel.fprintf ch "flip (%a) %a" dump_prob p (dump_statement ~drop:true l) s1;
    Option.iter s2_opt ~f:(fun s2 -> Out_channel.fprintf ch "%selse %a" (tab l) (dump_statement ~drop:true l) s2)
  | S_while (e, s0) -> Out_channel.fprintf ch "while (%a) %a" dump_expression e (dump_statement ~drop:true l) s0
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
  Out_channel.fprintf ch "void %s() {\n%a}\n" proc_desc.name.txt (dump_statements 1) proc_desc.body
;;

let dump_program { filename; gvars; procs } =
  Out_channel.with_file filename ~f:(fun ch ->
      List.iter gvars ~f:(fun gvar -> Out_channel.fprintf ch "bool %s;\n" gvar.txt);
      List.iteri procs ~f:(fun i proc ->
          if i > 0 || not (List.is_empty gvars) then Out_channel.fprintf ch "\n";
          dump_procedure ch proc))
;;
