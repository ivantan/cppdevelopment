// Chap 4: Statements
// 5.3 Iter statements

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
	// do while
	// do
	// 		statement
	// while (cond);
	
	// the semicolon is required after the cond
	
	// e.g. repeatedl ask the user for a pair of 
	// nos. to sum
	string rsp;
	do {
		cout << "please enter two values: ";
		int val1 = 0, val2 = 0;
		cin >> val1 >> val2;
		cout << "The sum of " << val1 << " and " << val2
			<< " = " << val1 + val2 << "\n\n" 
			<< "More? Enter yes or no: ";
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');
	
	return 0;
}
