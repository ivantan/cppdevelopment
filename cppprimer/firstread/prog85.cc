// Chap 6: Functions
// 6.1 Function Basics

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

// a function can return only a single value
// say, we ant to return the positon of the first occurrence of a
// given character in a string, AND we'd also like the function to return
// a count of how many times that character occurs.

// one solution would be to pass an additional reference argument to hold
// the occurrence count

string::size_type find_char(const string &s, char c,
														string::size_type &occurs)
{
	auto ret = s.size(); // position of the first occurrence, if any
	occurs = 0; // set occurrence count param
	for (decltype(ret) i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size())
				ret = i; // first occurrence of c
			++occurs; // increment the occurrence count
		}
	}
	return ret; // count is returned implicitly in occurs
}

// now we need to call find_char() with 3 arguments; s is the string,
// c is the char we are interested in, and ctr is a size_type obj to
// hold the occurrence count

int main()
{
	string s = "hello";
	string::size_type ctr;

	auto index = find_char(s, 'l', ctr);
	cout << "the string is 'hello'." << endl;
	cout << "pos of first occurrence of 'l' is at " << index << endl;
	cout << "number of occurrences: " << ctr << endl;

	return 0;
}
