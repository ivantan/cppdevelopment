// Chap 4: Expressions
// 4.7 Bitwise operator

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
	// bitwise ops
	// e.g. NOT (~), left/right shift (<</>>), AND (&), OR (|), XOR (^)

	// using bitwise ops
	// e.g. assume a teacher has 30 students in class
	// each week the class is given a pass/fail quiz
	unsigned long quiz1 = 0;

	// indicate that no. 27 student pass
	quiz1 |= 1UL << 27;
	
	// reexamination shows that student no. 27 failed
	quiz1 &= ~(1UL << 27);

	// want to know who student no. 28 fared
	bool status = quiz1 & (1UL << 27);

	cout << status << endl;

	return 0;
}
