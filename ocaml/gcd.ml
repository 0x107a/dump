(* impl of the well known gcd euclidean algorithm in ocaml *)
let rec gcd (x:int) (y:int) : int =
  if y == 0
  then x
  else gcd y (x mod y);;
Printf.printf "%d\n" (gcd 45 10);;
Printf.printf "%d\n" (gcd 9500000012 384888888);;
