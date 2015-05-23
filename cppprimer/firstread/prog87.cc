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

// array parameters
// ----------------
// arrays cannot be copied
// passing an array is equal to passing a ptr to the first
// element

// void print(const int*);
// void print(const int[]);
// void print(const int[10]);
// are all equivalent

// when compile checks a call to print(), it will only check that
// the argument has type const int*

// because of this, the compiler does not know the size of the array,
// functions that take array param must ensure that all uses of the
// array stay within the array bounds. here's some solutions:

// solution1: using a marker to specify the extent of an array
void print(const char *cp)
{
	if (cp) // so that cp is not a null ptr
		while (*cp) // so long as the char it points to is not a null char
			cout << *cp++; // print chat and advance ptr
}

// solution2: using standard library conventions
void print2(const int *beg, const int *end)
{
	// print every elem start at beg up to but not incld end
	while (beg != end)
		cout << *beg++ << endl; // print curr elem and advance ptr
}

// solution3: more common in C and older C++ programs
// find the size of the array and cycle through it
void print3(const int ia[], size_t size)
{
	for (size_t i = 0; i != size; ++i) {
		cout << ia[i] << endl;
	}
}

int main()
{
	int j[2] = {0, 1};
	// j is converted to a ptr to the first elem in j
	// the second argument is a ptr to one past the end of j
	print2(begin(j), end(j)); // begin and end functions from std

	print3(j, end(j) - begin(j));

	return 0;
}
