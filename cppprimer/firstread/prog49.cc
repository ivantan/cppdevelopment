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
	// init a 2-dim array
	int ia[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};
	
	// we need not initialise all the elements
	// it is okay to leave some of it empty
	
	// subscripting a multi-dim array
	int arr[10][20][30] = {0};
	ia[2][3] = arr[0][0][0];
	// using reference to bind to a row in ia
	int (&row)[4] = ia[1];
	for (auto i : row)
		cout << i << " ";
	cout << endl; // prints second row of ia
	
	// to use a multi-dim array in a range for, the loop
	// var for all but the innermost array must be references
	
	for (const auto &row : ia)
		for (auto col : row)
			cout << col << endl;
	
	return 0;
}