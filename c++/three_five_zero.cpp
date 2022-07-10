// the rule of 3, 5, and 0. a guideline used to enforce good code practices when deciding when
// to manually define move/copy constructors, as opposed to simply allowing them to default.

#include <bits/stdc++.h>

// if the class requires a custom destructor for the resource, then the class will require a
// custom defined destructor, copy constructor, and copy assignment constructor.
class rule_of_three {
public:
};

// the rule of five refers to manually defining the destructor, move constructor, move assignment
// constructor, copy constructor, and copy assignment constructors, as it prevents implicit
// definition of the move constructor. any class which should use move semantics must declare all
// five of these member functions.
// this rule is generally utilized as a means of handling ownership of a resource. a solution to
// manually defining all 5 of these members for every single class are smart pointers. if we
// delegate the handling of ownership into smart pointer, it is advisable to do so.
class rule_of_five {};


// rule of zero refers to a few guidelines, which generally means that if you can avoid defining
// default operations, do. if your class does not require a custom destructor to handle the
// resource (if present) does not need define any destructor, or move/copy constructor/assignement
// operators.

class rule_of_zero {
  std::string m_
public:
};

// if a base class is expected to be inherited from, declare the destructor as public and virtual.
// this prevents additional move constructor calls.
// another important guideline: "if you have to define or =delete any default operation, then define
// or =delete them all.

