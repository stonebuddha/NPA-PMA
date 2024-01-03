module type PRE_VERTEX = sig
  type t [@@deriving sexp, compare, hash, equal]
end

module type PRE_EDGE = sig
  type t
end

module type VERTEX = sig
  type t [@@deriving sexp, compare, hash, equal]
  type label

  val create : label -> t
  val label : t -> label
end

module type EDGE = sig
  type t
  type vertex

  val src : t -> vertex
  val dsts : t -> vertex list

  type label

  val create : vertex -> label -> vertex list -> t
  val label : t -> label
end

module type G = sig
  type t

  module V : VERTEX

  type vertex = V.t [@@deriving sexp, compare, hash, equal]

  module E : EDGE with type vertex = vertex

  type edge = E.t

  val empty : t
  val is_empty : t -> bool
  val nb_vertex : t -> int
  val nb_edge : t -> int
  val mem_vertex : t -> vertex -> bool
  val add_vertex : t -> vertex -> t
  val add_edge_e : t -> edge -> t
  val succ : t -> vertex -> vertex list
  val pred : t -> vertex -> vertex list
  val succ_e : t -> vertex -> edge list
  val pred_e : t -> vertex -> edge list
  val fold_vertex : t -> init:'a -> f:(vertex -> 'a -> 'a) -> 'a
  val iter_vertex : t -> f:(vertex -> unit) -> unit
  val fold_edges : t -> init:'a -> f:(vertex -> vertex list -> 'a -> 'a) -> 'a
  val iter_edges : t -> f:(vertex -> vertex list -> unit) -> unit
  val fold_edges_e : t -> init:'a -> f:(edge -> 'a -> 'a) -> 'a
  val iter_edges_e : t -> f:(edge -> unit) -> unit
  val fold_succ : t -> on:vertex -> init:'a -> f:('a -> vertex -> 'a) -> 'a
  val iter_succ : t -> on:vertex -> f:(vertex -> unit) -> unit
  val fold_pred : t -> on:vertex -> init:'a -> f:('a -> vertex -> 'a) -> 'a
  val iter_pred : t -> on:vertex -> f:(vertex -> unit) -> unit
  val fold_succ_edges : t -> on:vertex -> init:'a -> f:(vertex -> vertex list -> 'a -> 'a) -> 'a
  val iter_succ_edges : t -> on:vertex -> f:(vertex -> vertex list -> unit) -> unit
  val fold_pred_edges : t -> on:vertex -> init:'a -> f:(vertex -> vertex list -> 'a -> 'a) -> 'a
  val iter_pred_edges : t -> on:vertex -> f:(vertex -> vertex list -> unit) -> unit
  val fold_succ_edges_e : t -> on:vertex -> init:'a -> f:(edge -> 'a -> 'a) -> 'a
  val iter_succ_edges_e : t -> on:vertex -> f:(edge -> unit) -> unit
  val fold_pred_edges_e : t -> on:vertex -> init:'a -> f:(edge -> 'a -> 'a) -> 'a
  val iter_pred_edges_e : t -> on:vertex -> f:(edge -> unit) -> unit
  val union : t -> t -> t
end
