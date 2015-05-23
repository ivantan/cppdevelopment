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
	// the common way to write into multi-dim array
	constexpr size_t rowCnt = 3, colCnt = 4;
	int arr[rowCnt][colCnt];
	
	for (size_t i = 0; i != rowCnt; ++i)
		for (size_t j = 0; j != colCnt; ++j)
			arr[i][j] = i * colCnt + j;	
	
	// using range for and auto to print
	for (auto &row : arr) // remember use references
		for (auto col : row)
			cout << col << endl;
	
	// print the value of each element in ia, with each inner
	// array on its own line
	// p is a ptr to arry of 4 ints
	for (auto p = arr; p != arr + 3; ++p) {
		// q points to first element of p
		for (auto q = *p; q != *p + 4; ++q)
			cout << *q << " ";
		cout << endl;
	}	
	
	return 0;
}