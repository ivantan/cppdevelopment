// Chap 4: Expressions
// 4.10 comma op

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
	vector<int> ivec = {0,1,2,3,4};
	// comma operator
	// e.g. used in a for loop
	vector<int>::size_type cnt = ivec.size();
	//assign values from size ... 1 to the elements in ivec
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
		ivec[ix] = cnt;
	for (auto idx : ivec)
		cout << idx << endl;
	// note that when the cond test succeeds, ++ix and --cnt is carried out
	
	return 0;
}
