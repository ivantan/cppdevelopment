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

// 6.3.3. return a pointer to an array

// because we cannot copy an array, a function cannot return
// an array.
// but since a function can return a pointer, or a ref, to an
// array, we will use it to alter the array.

int main()
{
	int ival = 5;
	cout << factorial(ival) << endl;

	for (int ival2 = 1; ival2 < 6; ival2++)
			cout << factorial(ival2) << ", i = " << ival2 << endl;
	return 0;
}
