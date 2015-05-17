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

	// parameters and arguments
	// in the prev factorial e.g., we have an int parameter
	// you cannot supply an argument of another type

// parameter list can be empty, but cannot be omitted
void f1() { // 
}
// can also use void type instad of leaving it empty
void f2(void) {	
}

size_t count_calls()
{
	static size_t ctr = 0;
	return ++ctr;
}

int main()
{
	// most types can be used as the return type of a function
	// however the return type CANNOT be an array type or a
	// function type, though you can return a pointer to an array
	// or a function.
	
	// local static objects
	for (size_t i = 0; i != 10; ++i)
		cout << count_calls() << endl;
	// notice how count_calls can print from 1 to 10
	return 0;
}
