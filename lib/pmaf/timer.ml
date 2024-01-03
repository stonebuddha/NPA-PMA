open Core

let wrap_duration ~f =
  let t1 = Time_ns.of_int63_ns_since_epoch (Time_now.nanoseconds_since_unix_epoch ()) in
  let res = f () in
  let t2 = Time_ns.of_int63_ns_since_epoch (Time_now.nanoseconds_since_unix_epoch ()) in
  res, Time_ns.diff t2 t1
;;
