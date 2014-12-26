// Chap 4: Expressions
// 4.1 Fundamentals

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
	// an expression is composed of one or more operands and
	// yields a result when it is eval. the simplest form of
	// an expression is a single literal or var. the result of
	// such an exp is the val of the var or literal. more com-
	// plicated exp are formed from an operator and one or more
	// operands.
	
	// two kinds of operators; unary and binary
	// unary acts on one operand, such as the & and * op
	// binary ops act on two operands, e.g. == and *
	// "ternary" op takes three operands, and "function call"
	// op takes an unlimited num. of operands

	// precedence
	cout << 6 + 3 * 4 / 2 + 2 << endl;
	
	// overwrite precedence with parenthesis
	cout << (6 + 3) * (4 / 2 + 2 ) << endl;

	return 0;
}