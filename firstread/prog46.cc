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
	// begin and end functions on points
	
	// even though we can point to a nonexisting element; e.g.
	int arr[] = {0,1,2,3};
	int *e = &arr[4]; // pointer just past the last element in arr
	// however we may not deref or increment an off the end pointer
	
	// how we'll usually use this is for writing loop
	for (int *b = arr; b != e; ++b)
		cout << *b << endl;
	
	// nonetheless, we will never use this method, use begin and end instead
	int ia[] = {0,1,2,3,4,5};
	int *beg = std::begin(ia); // equal to pointing to first element
	int *las = std::end(ia); // equivalent to pointing one past last element
	
	// same example as above using begin and end
	int *pbeg = std::begin(arr), *pend = std::end(arr);
	while (pbeg != pend && *pbeg >= 0){
		cout << *pbeg << endl;
		++pbeg;
	}
	return 0;
}