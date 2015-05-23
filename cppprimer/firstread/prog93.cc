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

// reference returns are Lvalues

// a function call on the left hand side of an assignment

char &get_val(string &str, string::size_type ix)
{
	return str[ix]; // get_val assumes the given index is valid
}

int main()
{
	string s("a value");
	cout << s << endl; // prints a value
	get_val(s, 0) = 'A'; // changes s[0] to A
	cout << s << endl; // prints A value

	return 0;
}
