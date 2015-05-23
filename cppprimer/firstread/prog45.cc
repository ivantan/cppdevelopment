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
	// pointers are iterators
	
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int *p = arr; // points to the first element of arr
	
	cout << "array arr has elements: " << endl; 
	for (auto i : arr)
		cout << i << " ";
	cout << endl;
	
	cout << "*p points to first element, calling *p: " << endl; 
	cout << *p << endl;
	
	cout << "by incrementing; ++p, calling *p: " << endl; 
	++p; // points to second element
	cout << *p << endl;
	
	return 0;
}