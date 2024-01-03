module Make (G : Sig.G) : sig
  module Dfs : sig
    val forward : G.t -> on:G.vertex -> init:'a -> f:('a -> G.vertex -> 'a) -> 'a
    val backward : G.t -> on:G.vertex -> init:'a -> f:('a -> G.vertex -> 'a) -> 'a
  end

  module Bfs : sig
    val forward : G.t -> on:G.vertex -> init:'a -> f:('a -> G.vertex -> 'a) -> 'a
    val backward : G.t -> on:G.vertex -> init:'a -> f:('a -> G.vertex -> 'a) -> 'a
  end
end
