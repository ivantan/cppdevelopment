// Chap 6: Functions

#include <iostream>
#include <vector>
#include <stdexcept>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;
using std::initializer_list;

// return types and the return statement
// ----------------
// a return statement terminates the function that is currently executing
// and returns control to the point from which the function was called.

// two forms of return statements:
// 1) functions with no return value (return;)
// 2) wih return value (return expr;)

// for type 1: used only in a function that has a return type of "void".
// in fact function shtat return void are not req to contain a return.
// typically, the use of return in void functions is to exit the function
// at an intermediate point, like a break statement to exit a loop.

void swap(int &v1, int &v2)
{
	// if values are already same, no need to swap, just ret
	if (v1 == v2)
		return;
	// if we're here, there's work to do
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
	// no explicit return necessary
}

int main()
{

	return 0;
}
