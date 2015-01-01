// Chap 4: Statements
// 5.1 Simple statements

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
	// most statements in C++ end with a ";". an expr becomes 
	// an expr statement when it is folowed by a semicolon. 
	// expr statements cause the expr to be eval and its 
	// result discarded.

	int ival = 5;
	ival + 5; // useless expr statement

	// commonly, an expr statement contains an expr that has
	// a side effect-such as assigning a new value to a var,
	// or printing a result-when it is eval.

	cout << ival << endl;

	; // null statement

	// a null statement is useful where the language requires a
	// statement but the prog logic does not. null statements 
	// should be commented.

	int val = 5, sum = 0;
	// compound statement (referred to as a "block") is a seq of
	// statements or declarations surrounded by a pair of cutly
	// braces. a block is a scope.
	while (val <= 10) {
		sum += val;
		++val;
	}
	// note: a block is NOT terminated by a semicolon
}
