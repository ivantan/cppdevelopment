// Chap 3: String, Vectors, and Arrays
// 'string' type

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

// sometimes we do not want to ignore the whitespace!
// 'getline' takes in an input stream and a string

int main() 
{
	// size() is a member of string
	// use string.size() to find the length of a string
	// note that string.size() returns a type called
	// string::size_type, this is not int type
	// however, it is an unsigned data.
	
	string line;
	// can use auto instead of writing it out full
	getline(cin, line);
	// size() incl the whitespaces
	auto len = line.size(); // len has type string::size_type
	cout << line << " has len: " << len << endl;
	return 0;
}
