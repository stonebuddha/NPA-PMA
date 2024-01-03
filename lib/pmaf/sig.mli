open Core

module type SYMBOL = sig
  type t [@@deriving sexp, compare, hash, equal]

  val pp : Format.formatter -> t -> unit

  module Set : Set.S with type Elt.t = t
  module Map : Map.S with type Key.t = t
end

module type DOMAIN = sig
  type t [@@deriving equal]
  type tst
  type flt

  val pp : Format.formatter -> t -> unit
  val pp_tst : Format.formatter -> tst -> unit
  val pp_flt : Format.formatter -> flt -> unit
  val extend : t -> t -> t
  val combine : t -> t -> t
  val subtract : t -> t -> t
  val zero : t
  val one : t
  val cond_combine : tst -> t -> t -> t
  val prob_combine : flt -> t -> t -> t
  val ndet_combine : t -> t -> t
  val is_idempotent : bool
end

module type DOMAIN_SYMBOLIC_AUX = sig
  include DOMAIN

  val extend_lin : t -> t -> t

  type t_non_symbolic
  type t_symbolic

  val embed : t_non_symbolic -> t_symbolic
  val fresh : unit -> t_symbolic
  val equalize : t_symbolic -> t_symbolic -> unit
  val solve : verbose:bool -> t_symbolic list -> bool
  val inst : t_symbolic -> t_non_symbolic
end

module type DOMAIN_SYMBOLIC = sig
  type t [@@deriving equal]
  type tst
  type flt

  val pp : Format.formatter -> t -> unit
  val pp_tst : Format.formatter -> tst -> unit
  val pp_flt : Format.formatter -> flt -> unit
  val combine : t -> t -> t
  val subtract : t -> t -> t
  val zero : t
  val is_idempotent : bool

  type t_non_symbolic = t
  type t_symbolic
  type manager

  val create_manager : unit -> manager

  module Symbolic (_ : sig
    val man : manager
  end) :
    DOMAIN_SYMBOLIC_AUX
      with type t = t_symbolic
       and type tst = tst
       and type flt = flt
       and type t_non_symbolic := t_non_symbolic
       and type t_symbolic := t_symbolic
end
