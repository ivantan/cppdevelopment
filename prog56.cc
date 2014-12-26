// Chap 4: Expressions
// 4.4 Assignment Ops

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
	// logical NOT op
	// NOT (!) returns the inverse of thr truth value of its
	// operand.
	
	// relational ops, if chained, can be surprising
	int i = 5, j = 6, k = 2;
	if (i < j < k)
		cout << "5 < 6 < 2 returns true!" << endl;
	// remember the relational ops return bool
	// so 5 < 6 (left assoc) evals to 1, and 1 < 2 returns true.
	
	return 0;
}