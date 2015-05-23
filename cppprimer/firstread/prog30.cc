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
	// using 'getline'
	string line;
	while (getline(cin, line))
		cout << line << endl;
	
	// note that getline reads up to and including the first
	// newline in the input stream, and stores up to but NOT
	// including the newline into the string.
	return 0;
}
