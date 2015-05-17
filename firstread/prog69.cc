// Chap 4: Statements
// 5.3 Conditional scope

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
	// the if statement
	
	// form without "else"
	// if (condition)
	// 		statement
	
	// form with "else"
	// if (condition)
	// 		statement
	// else
	// 		statement2
	
	vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	int grade = 65;
	// if grade is less than 60, it is an F, otherwise compute
	// a subscript
	string lettergrade;
	if (grade<60)
		lettergrade = scores[0];
	else
		lettergrade = scores[(grade - 50)/10];
	cout << lettergrade << endl;
	
	// you can also nest if
	// if (condition)
	// 		statement
	// else 
	// 		if (condition)
	//			statement
	// ... so on and so forth
	
	// in C++, else is matched to the NEAREST if
	
	
	return 0;
}
