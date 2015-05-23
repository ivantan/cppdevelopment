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

// the syntax however can be intimidating, so we use a method called
// type alias

int main()
{
	typedef int arrT[10]; // arrT is a synonym for the type array of ten ints
	using arrtT = int[10]; // equivalent decl of arrT
	arrT* func(int i); // func returns a ptr to an array of five ints
	
	// without using a type alias
	
	int (*func(int i))[10];
	
	// recall
	int arr[10]; // arr is an array of 10 ints
	int *p1[10]; // p1 is an array of ten ptrs
	int (*p2)[10] = &arr;  // p2 points to an array of ten ints
	
	return 0;
}
