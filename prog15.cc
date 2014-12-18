// Chap 2: Var and Basic Types - Scope
// eg. from S1.4.2

// three names are used here; main, sum, and val
#include <iostream>
int main() // main lies outside any curly braces, thus has 'global scope'
{	
	// sum is defined inside, and is accessible thoughout the main func
	// not elsewhere, it is said to have a 'block scope'
	int sum = 0; 
	for (int val = 1; val <= 10; ++val) // val is def inside 'for', cannot be accessed elsewhere
		sum += val;
	std::cout << "sum of 1 to 10 inclusive is "
			  << sum << std::endl;
	
	// advice: def var where you first use it,
	// makes it easy to find.
	
	// scopes can be 'nested'
	// vars defined in a 'outer scope', can be used in scopes
	// nested inside that scope, or its 'inner scope'.
	// note that: vars defined in the outer scope can be redefined in an
	// inner scope.
	
	return 0;
}