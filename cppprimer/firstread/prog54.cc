// Chap 4: Expressions
// 4.3 Logical and relational

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
	// relational ops take op of arith and pointer types
	// logical ops take op of any type that can be converted to 
	// bool. both op return val of type bool.
	// operands of val zero is false, all other vals are true
	
	// AND (&&) returns true, iff, both operands eval to true
	// the RHS of && is eval iff the LHS is true 
	
	// OR (||) return true, if either of its operands eval
	// as true.
	// the RHS of || is eval iff the LHS is false
	
	// we have seen an example of && back when we tried
	// to print a text block
	// here we show an e.g. of use for ||
	string text[] = {"Maybe yes. Maybe no."};
	for (const auto &s : text) {
		cout << s;
		if (s.empty() || s[s.size() - 1] == '.')
			cout << endl;
		else
			cout << " ";
	}
	
	// reference is used so that we need not copy, in case
	// the text is large. also using const is good practice
	// since we need not write to the elements.
	
	return 0;
}