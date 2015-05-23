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

// recursion
// a function that calls itself, either directly or indirectly,
// is a recursive function. here we rewrite our factorial function
// to use recursion

int factorial(int val)
{
	if (val > 1)
			return factorial(val-1) * val;
	return 1;
}

// important, there must be a path through a recursive function
// that does not involve a recursive call, otherwise the
// function will recurse forever. here, the stopping condition
// is when val is 1.

int main()
{
	int ival = 5;
	cout << factorial(ival) << endl;

	for (int ival2 = 1; ival2 < 6; ival2++)
			cout << factorial(ival2) << ", i = " << ival2 << endl;
	return 0;
}
