open Core

module Make (G : Sig.G) = struct
  module VS = Set.Make_plain (G.V)
  module VT = Hashtbl.Make_plain (G.V)

  module Dfs = struct
    let forward g ~on ~init ~f =
      let rec iter vis acc u =
        let vis' = VS.add vis u in
        let acc' = f acc u in
        G.fold_succ g ~on:u ~init:(acc', vis') ~f:(fun (acc, vis) v ->
            if VS.mem vis v then acc, vis else iter vis acc v)
      in
      fst (iter VS.empty init on)
    ;;

    let backward g ~on ~init ~f =
      let rec iter vis acc u =
        let vis' = VS.add vis u in
        let acc' = f acc u in
        G.fold_pred g ~on:u ~init:(acc', vis') ~f:(fun (acc, vis) v ->
            if VS.mem vis v then acc, vis else iter vis acc v)
      in
      fst (iter VS.empty init on)
    ;;
  end

  module Bfs = struct
    let forward g ~on ~init ~f =
      let wl = Queue.create () in
      let vis = VT.create () in
      let rec iter acc =
        match Queue.dequeue wl with
        | None -> acc
        | Some u ->
          let acc' = f acc u in
          G.iter_succ g ~on:u ~f:(fun v ->
              if VT.mem vis v then () else Queue.enqueue wl v;
              VT.set vis ~key:v ~data:());
          iter acc'
      in
      Queue.enqueue wl on;
      VT.set vis ~key:on ~data:();
      iter init
    ;;

    let backward g ~on ~init ~f =
      let wl = Queue.create () in
      let vis = VT.create () in
      let rec iter acc =
        match Queue.dequeue wl with
        | None -> acc
        | Some u ->
          let acc' = f acc u in
          G.iter_pred g ~on:u ~f:(fun v ->
              if VT.mem vis v then () else Queue.enqueue wl v;
              VT.set vis ~key:v ~data:());
          iter acc'
      in
      Queue.enqueue wl on;
      VT.set vis ~key:on ~data:();
      iter init
    ;;
  end
end
