{-# LANGUAGE RankNTypes #-}

-- rank 0 types
-- first order function
add :: Int -> Int -> Int
add x y = x + y

-- rank 1 types
-- first order function
add' :: (Ord a) => a -> a -> a
add' x y = x + y

-- rank 1 types
-- second order function
twice :: (Ord a) => (a -> a) -> a -> a
twice f x = f (f x)

-- rank 2 types
-- second order function

