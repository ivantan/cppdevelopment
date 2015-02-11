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

// it is actually very important to make sure that a reference
// parameter is set to const or not.

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

// here we add a function to find whether s is a sentence or not.
// where a sentence is a string ending with a '.'

bool is_sentence(const string &s)
{
	string::size_type ctr = 0;
	return find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;
}

int main()
{
	string s = "hello.";
	string::size_type ctr;

	// if, we just used "string &s" instead of "const string &s" in
	// find_char(>>here<<, ...){}

	// then, it will be a compile-time error if we call
	// find_char("Hello", 'l', ctr);
	// this is because you now CANNOT pass a const obj, literal, or
	// an obj that requires conversion to a plain reference param.

	bool isSentence = is_sentence(s);
	cout << "is \"" << s << "\" a sentence? Ans: " << isSentence << endl;
	s = "hello there?";
	bool isSentence2 = is_sentence(s);
	cout << "is \"" << s << "\" a sentence? Ans: " << isSentence2 << endl;
	s = "not this, but that.";
	bool isSentence3 = is_sentence(s);
	cout << "is \"" << s << "\" a sentence? Ans: " << isSentence3 << endl;

	return 0;
}
