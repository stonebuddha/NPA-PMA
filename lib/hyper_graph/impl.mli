module Make (V0 : Sig.PRE_VERTEX) (E0 : Sig.PRE_EDGE) :
  Sig.G with type V.t = V0.t and type V.label = V0.t and type E.t = V0.t * E0.t * V0.t list and type E.label = E0.t
