// Chap 4: Expressions
// 4.7 Conditional operator

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
	// conditional (?) lets us embed simple if-else logic inside an expr
	// uses the form:
	// cond ? expr1 : expr2;
	// e.g.
	int grade = 70;
	string finalgrade = (grade < 60) ? "fail" : "pass";

	// can also nest conditionals. for readability, try not to nest more than two.
	grade = 95;
	finalgrade = (grade > 90) ? "high pass"
							  : (grade < 60) ? "pass" : "pass";
	cout << finalgrade << endl;
	// using conditional in output expr
	grade = 40;
	cout << ((grade < 60) ? "fail" : "pass") << endl;
	
	return 0;
}
