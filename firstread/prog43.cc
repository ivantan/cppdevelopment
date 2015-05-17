// Chap 3: String, Vectors, and Arrays
// 'Arrays'

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	// accessing elements of an array
	// when using a variable to subscript an array, we should define
	// that var to have type size_t.
	
	// as in the case of string and vectors, we use a range for when we
	// want to traverse the entire array
	unsigned scores[11] = {}; // array size 11 init to zeros
	for (auto i : scores)
		cout << i << " ";
	cout << endl;
	
	// likewise for strings and vectors, take special care with the range
	// value of subscripts
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 1; ix <= array_size; ++ix) // no error but freak results
		ia[ix] = ix;
	for (auto j : ia)
		cout << j << " ";
	cout << endl; // check output
	
	return 0;
}