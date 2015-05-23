// Chap 6: Functions

#include <iostream>
#include <vector>
#include <stdexcept>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;
using std::initializer_list;

// functions that return class types and the call operation

// call the size member of the string returned by shorterString
auto sz = shorterString(s1, s2).size();

const string &shorterString(const string &s1, const string &s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}

// shows that call operator has assoc and precedence, these operators
// are left assoc. the result of shorterString is the left operand of the
// dot operator. the dot operator then fetches the size member of the
// string.

int main()
{

	return 0;
}
