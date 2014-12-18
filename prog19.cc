// Chap 2: Var and Basic Types - compound types
// two kinds of compound types:
// references, and pointers

#include <iostream>
int main() 
{	
	// need to rmb whether an assignment changes the pointer, or the obj
	// to which the pointer points. just rmb, assignment changes its
	// left-hand operand.

	int ival = 43;
	int i = 42;
	int *pi = 0; // pi init but no bind to any obj
	std::cout << pi << std::endl; // nullptr
	
	int *pi2 = &i; // pi2 bind to i, holds address of i
	std::cout << pi2 << std::endl; // add of i
	
	int *pi3; // uninitialised pi3, bad practice
	pi3 = pi2; // pi2 and pi3 both points to obj i
	std::cout << pi3 << std::endl; // add of i
	std::cout << *pi3 << std::endl; // val of i, 42
	
	pi2 = 0; // pi2 no longer addresses an obj
	std::cout << pi2 << std::endl; // nullptr
	
	pi = &ival; // val in pi is changed, pi now points to ival
	std::cout << pi << std::endl; // add of ival
	std::cout << *pi << std::endl; // prints ival, 43
	
	*pi = 0; // val in ival is changed, pi is unchanged
	std::cout << pi << std::endl; // add of ival
	std::cout << *pi << std::endl; // prints ival, 0
	
	return 0;
}