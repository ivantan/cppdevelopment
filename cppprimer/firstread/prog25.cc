// Chap 2: Var and Basic Types
// preprocessor

#include <iostream>

// '#ifndef' and '#ifdef' are two directives to test whether
// a given preprocessor var has or has not been def.
// e.g. ifndef is true if the var has NOT been defined,
// ifdef is true if the var has been defined. when the
// test is true, everything following the directive will run
// up to the matching '#endif'

#ifndef SALES_DATA_H // if not def, run the rest
#define SALES_DATA_H 
#include <string> 
struct Sales_data {
std::string bookNo; unsigned units_sold = 0; double revenue = 0.0;
}; 
#endif // run till here

// the most common technique for making it safe to include
// a header multiple times relies on the preprocessor. this
// is inherited from C, a prog that runs before the compiler.
int main() 
{
	return 0;
}
