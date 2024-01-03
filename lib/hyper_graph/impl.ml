open Core

module Make (V0 : Sig.PRE_VERTEX) (E0 : Sig.PRE_EDGE) = struct
  module V = struct
    include V0

    type label = t

    let label u = u
    let create u = u
  end

  type vertex = V.t [@@deriving sexp, compare, hash, equal]

  module E = struct
    type vertex = V.t
    type t = V.t * E0.t * V.t list

    let src (u, _, _) = u
    let dsts (_, _, vs) = vs

    type label = E0.t

    let label (_, l, _) = l
    let create u l vs = u, l, vs
  end

  type edge = E.t

  module VS = Set.Make_plain (V)
  module VM = Map.Make_plain (V)

  type t =
    { vertices : vertex list
    ; vertex_set : VS.t
    ; vertex_cnt : int
    ; edges : edge list
    ; edge_cnt : int
    ; forward : VS.t VM.t
    ; backward : VS.t VM.t
    ; forward_e : edge list VM.t
    ; backward_e : edge list VM.t
    }

  let empty =
    { vertices = []
    ; vertex_set = VS.empty
    ; vertex_cnt = 0
    ; edges = []
    ; edge_cnt = 0
    ; forward = VM.empty
    ; backward = VM.empty
    ; forward_e = VM.empty
    ; backward_e = VM.empty
    }
  ;;

  let is_empty g = g.vertex_cnt = 0
  let nb_vertex g = g.vertex_cnt
  let nb_edge g = g.edge_cnt
  let mem_vertex g u = VS.mem g.vertex_set u

  let add_vertex g u =
    if mem_vertex g u
    then g
    else
      { vertices = u :: g.vertices
      ; vertex_set = VS.add g.vertex_set u
      ; vertex_cnt = g.vertex_cnt + 1
      ; edges = g.edges
      ; edge_cnt = g.edge_cnt
      ; forward = VM.add_exn g.forward ~key:u ~data:VS.empty
      ; backward = VM.add_exn g.backward ~key:u ~data:VS.empty
      ; forward_e = VM.add_exn g.forward_e ~key:u ~data:[]
      ; backward_e = VM.add_exn g.backward_e ~key:u ~data:[]
      }
  ;;

  let add_edge_e g ((u, _, vs) as e) =
    let g = List.fold (u :: vs) ~init:g ~f:add_vertex in
    { vertices = g.vertices
    ; vertex_set = g.vertex_set
    ; vertex_cnt = g.vertex_cnt
    ; edges = e :: g.edges
    ; edge_cnt = g.edge_cnt + 1
    ; forward = VM.set g.forward ~key:u ~data:(VS.union (VM.find_exn g.forward u) (VS.of_list vs))
    ; backward = List.fold vs ~init:g.backward ~f:(fun acc v -> VM.set acc ~key:v ~data:(VS.add (VM.find_exn acc v) u))
    ; forward_e = VM.set g.forward_e ~key:u ~data:(e :: VM.find_exn g.forward_e u)
    ; backward_e = List.fold vs ~init:g.backward_e ~f:(fun acc v -> VM.set acc ~key:v ~data:(e :: VM.find_exn acc v))
    }
  ;;

  let succ g u = VM.find_exn g.forward u |> VS.to_list
  let pred g u = VM.find_exn g.backward u |> VS.to_list
  let succ_e g u = VM.find_exn g.forward_e u
  let pred_e g u = VM.find_exn g.backward_e u
  let fold_vertex g ~init ~f = List.fold_right g.vertices ~init ~f
  let iter_vertex g ~f = fold_vertex g ~init:() ~f:(fun u () -> f u)
  let fold_edges g ~init ~f = List.fold_right g.edges ~init ~f:(fun (u, _, vs) acc -> f u vs acc)
  let iter_edges g ~f = fold_edges g ~init:() ~f:(fun u vs () -> f u vs)
  let fold_edges_e g ~init ~f = List.fold_right g.edges ~init ~f
  let iter_edges_e g ~f = fold_edges_e g ~init:() ~f:(fun e () -> f e)
  let fold_succ g ~on ~init ~f = List.fold (succ g on) ~init ~f
  let iter_succ g ~on ~f = fold_succ g ~on ~init:() ~f:(fun () u -> f u)
  let fold_pred g ~on ~init ~f = List.fold (pred g on) ~init ~f
  let iter_pred g ~on ~f = fold_pred g ~on ~init:() ~f:(fun () u -> f u)
  let fold_succ_edges g ~on ~init ~f = List.fold_right (succ_e g on) ~init ~f:(fun (u, _, vs) acc -> f u vs acc)
  let iter_succ_edges g ~on ~f = fold_succ_edges g ~on ~init:() ~f:(fun u vs () -> f u vs)
  let fold_pred_edges g ~on ~init ~f = List.fold_right (pred_e g on) ~init ~f:(fun (u, _, vs) acc -> f u vs acc)
  let iter_pred_edges g ~on ~f = fold_pred_edges g ~on ~init:() ~f:(fun u vs () -> f u vs)
  let fold_succ_edges_e g ~on ~init ~f = List.fold_right (succ_e g on) ~init ~f
  let iter_succ_edges_e g ~on ~f = fold_succ_edges_e g ~on ~init:() ~f:(fun e () -> f e)
  let fold_pred_edges_e g ~on ~init ~f = List.fold_right (pred_e g on) ~init ~f
  let iter_pred_edges_e g ~on ~f = fold_pred_edges_e g ~on ~init:() ~f:(fun e () -> f e)

  let union g1 g2 =
    { vertices = g2.vertices @ g1.vertices
    ; vertex_set = VS.union g2.vertex_set g1.vertex_set
    ; vertex_cnt = g2.vertex_cnt + g1.vertex_cnt
    ; edges = g2.edges @ g1.edges
    ; edge_cnt = g2.edge_cnt + g1.edge_cnt
    ; forward =
        VM.merge g2.forward g1.forward ~f:(fun ~key:_ -> function
          | `Both _ -> invalid_arg "[union]"
          | `Left v -> Some v
          | `Right v -> Some v)
    ; backward =
        VM.merge g2.backward g1.backward ~f:(fun ~key:_ -> function
          | `Both _ -> invalid_arg "[union]"
          | `Left v -> Some v
          | `Right v -> Some v)
    ; forward_e =
        VM.merge g2.forward_e g1.forward_e ~f:(fun ~key:_ -> function
          | `Both _ -> invalid_arg "[union]"
          | `Left v -> Some v
          | `Right v -> Some v)
    ; backward_e =
        VM.merge g2.backward_e g1.backward_e ~f:(fun ~key:_ -> function
          | `Both _ -> invalid_arg "[union]"
          | `Left v -> Some v
          | `Right v -> Some v)
    }
  ;;
end
