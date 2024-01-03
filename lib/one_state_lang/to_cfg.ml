open Core
open Pmaf

module Make (S : sig
  include Sig.SYMBOL

  val of_string : string -> t
end) (D : sig
  include Sig.DOMAIN

  val encode_reward : int -> t
  val flt_of_mpqf : Mpqf.t -> flt
end) =
struct
  module Path = Hyper_path.Make (S) (D)

  let f_proc proc =
    let vertices = ref [] in
    let new_vertex =
      let counter = ref 0 in
      fun () ->
        Int.incr counter;
        let v = S.of_string ("v" ^ Int.to_string !counter) in
        vertices := v :: !vertices;
        v
    in
    let edges = ref [] in
    let add_edge v l us = edges := (v, l, us) :: !edges in
    let rec g_stmt u exit bopt copt s =
      match s.Ast.stmt_desc with
      | S_flip (p, s1, s2_opt) ->
        let s2 =
          match s2_opt with
          | Some s2 -> s2
          | None -> { stmt_desc = S_block []; stmt_loc = Location.none }
        in
        let u1 = new_vertex () in
        let u2 = new_vertex () in
        add_edge u (Path.Prob (D.flt_of_mpqf p)) [ u1; u2 ];
        let v1 = g_stmt u1 exit bopt copt s1 in
        let v2 = g_stmt u2 exit bopt copt s2 in
        let v = new_vertex () in
        add_edge v1 (Path.Seq D.one) [ v ];
        add_edge v2 (Path.Seq D.one) [ v ];
        v
      | S_ndet (s1, s2_opt) ->
        let s2 =
          match s2_opt with
          | Some s2 -> s2
          | None -> { stmt_desc = S_block []; stmt_loc = Location.none }
        in
        let u1 = new_vertex () in
        let u2 = new_vertex () in
        add_edge u Path.Ndet [ u1; u2 ];
        let v1 = g_stmt u1 exit bopt copt s1 in
        let v2 = g_stmt u2 exit bopt copt s2 in
        let v = new_vertex () in
        add_edge v1 (Path.Seq D.one) [ v ];
        add_edge v2 (Path.Seq D.one) [ v ];
        v
      | S_return ->
        let v = new_vertex () in
        add_edge u (Path.Seq D.one) [ exit ];
        v
      | S_block s0s -> g_stmts u exit bopt copt s0s
      | S_call x ->
        let v = new_vertex () in
        add_edge u (Path.Call (S.of_string x.txt)) [ v ];
        v
      | S_tick c ->
        let v = new_vertex () in
        add_edge u (Path.Seq (D.encode_reward c)) [ v ];
        v
    and g_stmts u exit bopt copt = function
      | [] -> u
      | s0h :: s0t ->
        let vh = g_stmt u exit bopt copt s0h in
        let vt = g_stmts vh exit bopt copt s0t in
        vt
    in
    let entry = new_vertex () in
    let exit = new_vertex () in
    let (_ : S.t) = g_stmts entry exit None None proc.Ast.proc_desc.body in
    let cfg = Path.create_cfg !vertices !edges in
    proc.proc_desc.name.txt, Path.gaussian_elim cfg entry
  ;;

  let f_prog prog = List.map prog.Ast.procs ~f:f_proc
end
