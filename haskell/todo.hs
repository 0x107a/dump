-- a small todo list helper written in haskell
import System.Environment
import Data.List

main :: IO ()
main = do
  args <- getArgs
  print (args !! 0)
