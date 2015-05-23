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

// incorrect return values, this code will not compile
bool str_subrange(const string &str1, const string &str2)
{
	// samw size: return normal equality test
	if (str.size() == str2.size())
		return str1 == str2; // ok. == returns bool
	// find the size of the smaller string; conditional operator,
	// see S4.7 (p151 of ref text)
	auto size = (str1.size() < str2.size())
		? str1.size() : str2.size();
	// look at each element up to the size of the smaller string
	for (decltype(size) i = 0; i != size; ++i) {
		if (str1[i] != str2[i])
			return; // error #1: no ret value; compiler should detect this
	}
	// error #2: control might flow off the end of the function with a ret
	// the compiler might not detect this error.
}

int main()
{

	return 0;
}
