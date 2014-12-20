// Chap 3: String, Vectors, and Arrays
// 'string' type

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	// subscripting
	// value of the subscript, or index, is of the same
	// type as .size().
	
	// example: to print the first char in a string
	string s("Merry Christmas!");
	if (!s.empty())
		cout << s[0] << endl;
	
	// can also use index to change the first char
	// in a word to uppercase
	string s2("lower case string");
	if (!s2.empty())
		s2[0] = toupper(s2[0]);
	cout << s2 << endl; 
	
	// using subscript '[]' with iteration
	// change all char in first word of string
	// to uppercase.
	// index is of type same as .size()
	for (decltype(s2.size()) index = 0;
		index != s2.size() && !isspace(s2[index]); ++index)
			s2[index] = toupper(s2[index]); // cap the curr char
	cout << s2 << endl;
	return 0;
}