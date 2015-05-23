// Chap 3: String, Vectors, and Arrays
// 'string' type

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	// dealing with characters in a string
	// check whether a string contains, whitespace, 
	// change some characters, see if a character is
	// present, etc.
	
	// first, we need to gain access to the chars inside
	// the string. next, we want to know/change characteristics
	// of a character.
	
	// defined in the cctype header, there are many functions
	// to check these characteristics. for e.g.:
	// isdigit(c), islower(c), ispunct(c), toupper(c)
	
	// use range 'for' to process every character
	string str("some string");
	// print the chars in str one char to a line
	for (auto c : str)
		cout << c << endl;
	
	// more complicated (useful?) example
	string s("Hello World!!!");
	// punct_cnt has the same type that s.size returns
	decltype(s.size()) punct_cnt = 0;
	// count the num. of punctuation chars in s
	for (auto c : s)
		if (ispunct(c))
			++punct_cnt;
	cout << punct_cnt
		  << " punctuation characters in " << s << endl;
	
	return 0;
}