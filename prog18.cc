// Chap 2: Var and Basic Types - compound types
// two kinds of compound types:
// references, and pointers

#include <iostream>
#include <cstdlib>
int main() 
{	
	// & and * use in declarations or expressions have
	// different meanings!
	
	// in declarations, &refVal is a reference and *p is a
	// pointer. they form the compound types.
	
	// as part of an expression; double *p = &some_val, 
	// & is  the 'address-of' operator, used to get the address. 
	// cout << *p; * is the 'de-reference' operator, used to access
	// the object the pointer is pointing to. they denote an operator, ok?
	
	int ival = 42;
	int *p = &ival; // declaration, * forms a compound type, & is an operator
	std::cout << *p << std::endl; // dereference operator
	
	*p = 0; // deref, yield ival and assign 0 through p
	std::cout << *p << std::endl; // prints 0
	
	// null pointers
	// it is possible to check if a point is a null pointer
	int *p1 = nullptr;
	int *p2 = 0;
	// remember to include cstlib
	int *p3 = NULL; // but best to avoid, since it requires preprocessor, use nullptr
	
	// advice: initialize ALL pointers
	// define a pointer only after the object it points to has been def
	// if no object to bind, then init to nullptr

	return 0;
}