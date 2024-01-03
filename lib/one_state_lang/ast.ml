open Core

type 'a loc = 'a Location.loc =
  { txt : 'a
  ; loc : Location.t
  }

type ident = string loc

type statement =
  { stmt_desc : statement_desc
  ; stmt_loc : Location.t
  }

and statement_desc =
  | S_flip of Mpqf.t * statement * statement option
  | S_ndet of statement * statement option
  | S_return
  | S_block of statement list
  | S_call of ident
  | S_tick of int

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
  ; procs : procedure list
  }

let dump_prob ch p = Out_channel.fprintf ch "%s/%s" (Mpqf.get_num p |> Mpzf.to_string) (Mpqf.get_den p |> Mpzf.to_string)

let rec dump_statement ?(drop = false) l ch { stmt_desc; _ } =
  let tab l = String.init (l * 2) ~f:(fun _ -> ' ') in
  if not drop then Out_channel.fprintf ch "%s" (tab l);
  match stmt_desc with
  | S_flip (p, s1, s2_opt) ->
    Out_channel.fprintf ch "flip (%a) %a" dump_prob p (dump_statement ~drop:true l) s1;
    Option.iter s2_opt ~f:(fun s2 -> Out_channel.fprintf ch "%selse %a" (tab l) (dump_statement ~drop:true l) s2)
  | S_ndet (s1, s2_opt) ->
    Out_channel.fprintf ch "ndet %a" (dump_statement ~drop:true l) s1;
    Option.iter s2_opt ~f:(fun s2 -> Out_channel.fprintf ch "%selse %a" (tab l) (dump_statement ~drop:true l) s2)
  | S_return -> Out_channel.fprintf ch "return;\n"
  | S_block s0s ->
    Out_channel.fprintf ch "{\n";
    dump_statements (l + 1) ch s0s;
    Out_channel.fprintf ch "%s}\n" (tab l)
  | S_call x -> Out_channel.fprintf ch "%s();\n" x.txt
  | S_tick c -> Out_channel.fprintf ch "tick(%d);\n" c

and dump_statements l ch = List.iter ~f:(fun s -> dump_statement l ch s)

let dump_procedure ch { proc_desc; _ } =
  Out_channel.fprintf ch "void %s() {\n%a}\n" proc_desc.name.txt (dump_statements 1) proc_desc.body
;;

let dump_program { filename; procs } =
  Out_channel.with_file filename ~f:(fun ch ->
      List.iteri procs ~f:(fun i proc ->
          if i > 0 then Out_channel.fprintf ch "\n";
          dump_procedure ch proc))
;;
