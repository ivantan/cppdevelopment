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

// list initializing the return value

// under the c++11 new std, functions can return a braced list of
// values.

// in comparison to s6.2.6 (pg220 of ref text), instead of
// a varying number of string arguments and printing an error
// msg composed from the given strings; that is calling the
// function error_msg, we write another function that will
// return a vector that holds the error-message strings.

vector<string> process()
{
	// ...
	// expect and actual are strings
	if (expected.empty())
			return {}; // return an empty vect
	else if (expected == actual)
			return {"functionX", "okay"}; // return list-initialized vect
	else
			return {"functionX", expected, actual};
}

int main()
{


	return 0;
}
