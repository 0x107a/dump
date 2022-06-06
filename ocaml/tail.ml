(*
  an example of using accumulator arguments as a means of achieving a tail recursive
  function. tail recursion is an optimization that the compiler performs, which allows
  it to turn a recursive function into a nested collection of iterative loops. this
  prevents the possibility of reaching a stack overflow due to recursive calls, and
  optimizes performance, as we dont have to perform a call per each recursion.

  this method will work most times, but other times we will have to opt for other
  methods, such as continuation passing style. an example of that is contained within
  the cps.ml file.

  we 
*)

