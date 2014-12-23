// Chap 3: String, Vectors, and Arrays
// 'Multi-dim Arrays'

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	// Multi-dimensional arrays are, arrays of arrays
	
	// first, we can init a vector from an array
	int arr[] = {0,1,2,3};
	vector<int> vect = {arr[0], arr[1], arr[2]};
	
	for (auto i : vect)
		cout << i << " ";
	cout << endl;
	
	// we can also copy a vector into an array
	int arr2[3];
	int cnt = 0;
	for (auto i : vect){
		arr2[cnt] = i;
		++cnt;		
	}
	for (auto j : arr2)
		cout << j << " ";
	cout << endl;
	
	// we can define an array whose elements are arrays by
	// providing 2 dims: the dim of the array and the dim
	// of its elements
	
	int ia[3][4]; // array of size 3, each element is an array
	// of ints of size 4
	
	// can also define array of arrays of arrays
	int ia2[10][20][30] = {0};
	
	return 0;
}