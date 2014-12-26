// Chap 4: Expressions
// 4.5 increment and decrement op

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
	// ++ --
	// there are two forms of these ops; prefix and postfix
	// prefix increments (or decrements) its operands and 
	// yields the changed object as its result
	// postfix increment the operand but yield a copy of the
	// ORIGINAL, unchanged value as its result
	int i = 0, j;
	j = ++i;
	cout << "i: " << i << " j: " << j << endl;
	j = i++;
	cout << "i: " << i << " j: " << j << endl;
	
	
	return 0;
}