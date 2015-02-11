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

// function swith varying param
// ----------------
// sometimes we do not know in advance how many arguments we need to
// pass to a function

// if all arguments have the same type, we can pass a library type
// named "initializer_list", if argument types vary use a variadic
// template. elipsis (...) can also be used in programs that need to
// interface to C functions.

// solution1: initializer_list
// like vector, initializer_list is a template type, when we define
// an initializer_list, we must specify the type of elements that
// the list will contain:
// initializer_list<string> ls;
// initializer_list<int> li;

// example: print error message, error_msg function takes different
// number of arguments depending on error
void error_msg(initializer_list<string> il)
{
	for (auto beg = il.begin(); beg != il.end(); ++beg)
		cout << *beg << " " ;
	cout << endl;
}

int main()
{
	// expected, actual are strings
	string expected = "actualres", actual = "actualres";

	if (expected != actual)
		error_msg({"functionX", expected, actual});
	else
		error_msg({"functionX", "okay"});

	return 0;
}
