let rec fib (n:int) : int = 
  match n with 0->0|1->1|
    n -> fib(n - 1) + fib(n - 2);;
Printf.printf "%d\n" (fib 7)
