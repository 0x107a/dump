let rec factorial (n:int) : int =
  if n == 1 then 1
  else n * factorial(n-1);;
Printf.printf "%d\n" (factorial 5)
