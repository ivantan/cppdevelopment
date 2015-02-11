// Chap 6: Functions
// 6.1 Function Basics

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


int main()
{
	// passing arguments by value
	int n = 0;
	int i = n; // i is a copy of the value in n
	i = 42; // value in i is changed, n is unchanged

	// another example is the "factorial" fact() function, calling fact(i)
	// does not change the value of i, this is called "passing an argument
	// by value"

	// pointers behave like any other non-ref type

	int n2 = 0, i2 = 42;
	int *p = &n2, *q = &i2; // p points to n2, q points to i2
	cout << "n2 is " << n2 << " with ptr at " << p << endl;

	*p = 42; // value of n2 is changed to 42, p is unchanged
	cout << "n2 is now "<< n2 << " with ptr at " << p << endl;

	p = q; // p now points to i2, values in i2 and n2 unchanged
	cout << "n2 is now "<< n2 << " with ptr at " << p << endl;

	return 0;
}
