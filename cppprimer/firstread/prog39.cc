// Chap 3: String, Vectors, and Arrays
// 'iterators'

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	// if a container is empty, 'begin' and 'end' returns
	// the same iterators
	
	// rewrite the program that capitalised the first character of 
	// a string using an iterator instead of a subscript
	string s("some string");
	if (s.begin() != s.end()) {
		auto it = s.begin();
		*it = toupper(*it); // * here is doing dereferencing
	}
	cout << s << endl;
	
	// combine with increment ++ to rewrite the program to change 
	// case of the first word in a string
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);
	cout << s << endl;
	
	return 0;
}