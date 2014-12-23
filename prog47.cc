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
	// subscripts and pointers on arrays
	
	// recall that using the name of an array we are really using a
	// ptr to the first eement in that array, EVEN when we subscript an array
	
	int ia[] = {0,2,4,6,8};
	int i = ia[2]; // is equal to (ia + 2), or the 3rd element
	cout << i << endl;
	
	// similarly if we first define a ptr
	int *p = ia;
	i = *(p + 2); // equal to i = ia[2]
	cout << i << endl;
	
	// built in subscripts operator is different from the
	// usage on string and vector library, as subscript on
	// arrays can be signed, but forced to be unsigned by 
	// string and vectory library types
	
	int *p2 = &ia[2];
	cout << *p2 << endl;
	int j = p2[1];
	cout << j << endl;
	int k = p2[-2]; // look at this magic... prints ia[0]
	cout << k << endl;
	return 0;
}