-- demonstration of a closure in haskell

foo x = bar where
  bar y = x + y

main = 
  -- foo returns a function bar with a lexically scoped variable of x.
  -- this function encloses and preserved the scope of the variable
  -- outside its scope of defintion.
  print ((foo 12) 8)

