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
	// pointers and arrays
	// pointers and arrays are closely intertwined. actually, the compiler
	// converts an array to a pointer.
	
	string nums[] = {"one", "two", "three"};
	string *p = &nums[0];
	string *p2 = nums; // is equal to *p2 = &nums[0]
	
	// the compilers substitutes a pointer to the first element of
	// an object of type array
	
	// implications
	int ia[] = {0,1,2,3,4};
	auto ia2(ia); // ia2 is a pointer
	*ia2 = 42; // if we used ia instead of *ia, error assignment
	for (auto i : ia)
		cout << i << " ";
	cout << endl; // ia is now {42, 1, 2, 3, 4}
	
	return 0;
}