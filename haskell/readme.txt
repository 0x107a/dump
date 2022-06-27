haskell notes

something really cool about purely functional languages is the amount they can achieve
given such a simple formal system. by the church-turing thesis, a function which operates
on natural numbers can be calculated by an effective method if and only if it is computable
by a turing machine; therefore rendering a simple system like LC turing complete. amazing..
all operators within haskell are apparently also functions, which is something i find very
fascinating due to the fact that it allows us to define our own as well. fp is cool!

a feature of haskell is laziness, which is often praised as a great feature of the language
due to the fact that it provides a plethora of benefits that i will explain. the term lazy
implies to the fact that nothing is evaluated unless it has been explicitly applied. you
could define a function which theoretically falls into infinite recursion; but wont due
the fact that only the required values will be computed.

this laziness allows for elegant solutions to problems which would otherwise require
much lengthier code to solve.

all types within haskell must be capitalized. this is not a convention, it is enforced by
the language. this allows the developer to encode semantics within the source, which
therefore leads to more readable code (and technically faster compilation).

haskell operates on the hindley milner type system, which is essentially a restricted
system F which requires annotations. this means that haskell has things like polymorphism
and type inference within its system.

within purely functional languages, almost everything is an expression, and all values are
immutable by default. this includes things like conditionals, which are not technically
statements but ternary expressions (conditional expressions). the only exception to which
procedural statements are allowed within haskell, is via the "do" keyword. this allows
us to sequentially define statements until the end of the function definition.

within simply typed lambda calculus, types are monomorphic, with the term mono meaning
singular. each type must represent T -> T. This is not the case with system F, and by product
hindley milner. haskell features 2 forms of polymorphism within the language, parametric and
ad-hoc/bounded.

parametric polymorphism applies to functions which works on many different types. another term
for this is polymorphic functions. an example of this is the length function within the Prelude
module. no matter the type of the value stored within the list, it will always properly apply.

the function signature for the length function will look something of the sort:
length :: forall a. [a] -> Integer

this means that "for all types a, the function length takes a list of elements of type a and
returns an integer. haskell does not require us to explicitly use the forall function, as that
would lead to fairly ugly, unreadable, and unmaintainable code fairly quickly. instead, we can
define a polymorphic function as such:
foo :: a -> Int
foo c = 10

the function accepts any type as an argument, but will return only an integer. this ensures that
we are able to place semantic restrictions upon the types passed to our polymorphic function. of
course, there are much better means of applying this feature within our type system.

integer types within haskell are polymorphic too. haskell has 4 type classes for handling integral
types, Int, Integer, Float, and Double. the difference between Int and Integer, is that the Integer
has arbitrary precision.

ad-hoc or bounded polymorphism applies to the actual operations that are performed on types. an
example of this is C++'s operator overloading, which allows the user to write and rewrite the
operations in which operators perform depending on the type. this is vital for generic programming,
due to the fact that you could reuse a generic algorithm as long as the operators for the type/class
had been properly implemented.

this form of polymorphism has been implemented within haskell as well, in the form of type classes.
with these type classes, we can define our own types, and the actions that operators within the
language will perform on these types. this is possible since operators within haskell are also functions,
as previously stated.

important thing to note, the let keyword allows us to define variables within expressions. this is
the usage of the keyword, as it was a bit confusing as to why this existed when you could leave
it out when defining variables normally.

there are a few other forms of polymorphism within haskell like rank-N types and impredictive types,
but im still a beginner so i will focus on those at another time.





okay im having a bit of trouble understanding higher rank types for haskell. is it sort of like c++
template metaprogramming in which we are dealing with types, instead of values which have typed
that describe them? so we can have functions that recieve types (not values, raw types) as parameters
and return types? is this rank2 types??

we can think of this like c++ templates right? lets say a template was a function that the compiler
evaluates at compile time; this would technically be a rank 2 function right? when instantiated it
expects a type, and when substituted at compile time; its "returning" a type?

i could be completely wrong lmao, just brainstorming.


