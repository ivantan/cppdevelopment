// Chap 4: Expressions
// 4.2 Arith ops

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
	// + - * / % are arithmetic operators
	// they are also left associative
	
	// other than + and -, the rest are binary ops
	// + and - can be both unary and binary, e.g. of unary usage
	
	int i = 1024;
	int k = -i;
	bool b = true;
	bool b2 = -b; // true is promoted to 1, -1, then true
	cout << i << " " << k << " " << b << " " << b2 << endl;

	// division between int returns int
	// operands to modulus must be int
	
	
	return 0;
}