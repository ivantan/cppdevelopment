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

// 6.4. overloaded functions
// functions that have the same name but different parameter lists and
// that appear in the same scope are overloaded

// remaining print function in s6.2.4 of ref text
void print(const char *cp)
{
	if (cp)
		while (*cp)
			cout << *cp++;
}

int main()
{	
	// example: these functions perform the same general action but
	// apply to different parameter types. when called, the compiler
	// can deduce which function we want based on the arg type passed
	
	int j[2] = {0,1};
	print("Hello World");
	print(j, end(j) - begin(j));
	print(begin(j), end(j));
	return 0;
}
