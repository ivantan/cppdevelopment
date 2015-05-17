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

	// precedence and associativity
	cout << 6 + 3 * 4 / 2 + 2 << endl;
	
	// overwrite precedence with parenthesis
	cout << (6 + 3) * (4 / 2 + 2 ) << endl;
	
	// precendence in practice
	int ia[] = {0,2,4,6,8};
	int last = *(ia + 4); // with ()
	cout << last << endl;
	last = *ia + 4; // without ()
	cout << last << endl;
	
	// associativity
	// IO expressions, it matters and is left assoc
	
	// order of evaluation, precedence and assoc
	// ord of op eval is independent of precendence and assoc,
	// that is, an exp such as f() + g() * h() + j(),
	// only means that the results of g() and h() are
	// multiplied, and the result f() is added to the product,
	// and then added to the value of j(). NOTHING is said about
	// whether f(), g(), h(), or j() is evaluated first, or the 
	// order in evaluating its result in general.

	return 0;
}