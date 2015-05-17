// Chap 3: String, Vectors, and Arrays
// 'Multi-dim Arrays'

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;

int main() 
{
	// the common way to write into multi-dim array
	constexpr size_t rowCnt = 3, colCnt = 4;
	int arr[rowCnt][colCnt];
	
	for (size_t i = 0; i != rowCnt; ++i)
		for (size_t j = 0; j != colCnt; ++j)
			arr[i][j] = i * colCnt + j;	

	
	// using range for, auto, and library begin and end to print each line
	for (auto p = begin(arr); p != end(arr); ++p){
		for (auto q = begin(*p); q != end(*p); ++q)
			cout << *q << " ";
		cout << endl;
	}

	return 0;
}