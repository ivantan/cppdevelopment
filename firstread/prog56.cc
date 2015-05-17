// Chap 4: Expressions
// 4.4 Assignment Ops

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;

int main() 
{
	// the left hand operand of an assignment operator must be
	// a modifiable lvalue
	
	int i = 0, j = 0, k = 0; // init not assign
	const int ci = i; // init not assign
	
	// literals are rvalues; 1024 = k gives error
	// arith exp are rvalue; i + j = k gives err
	
	// assignment is right assoc
	int ival, jval;
	ival = jval = 0;
	
	// compound assignment operators
	// += -= *= /= %=
	// more complex ones
	// <<= >>= &= ^= |=
	
	return 0;
}