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

// using trailing return type
// under c++11, another way to simplify the decl of func
// is by using a trailing return type. trailing returns can 
// be def for any function, but are most useful for functions with
// complicated return types, such as ptrs (or refs) to arrays.

// a trailing return type follows the parameter list and is
// preceded by ->

auto func(int i) -> int(*)[10];

// if we know the arrays to which our function can return a ptr
// alternatively, use decltype to declare  the return type
// example: function returns a ptr to one or two arrays

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
// returns a ptr to an array of five int elements
decltype(odd) *arrPtr(int i)
{
	return (i % 2) ? &odd : &even; // returns a ptr to the array
}

int main()
{	
	int aInt;
	cin >> aInt;
	cout << arrPtr(aInt) << endl;
	return 0;
}
