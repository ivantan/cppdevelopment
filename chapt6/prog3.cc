#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

string::size_type find_char(const string &s, char c, 
							string::size_type &occurs)
{
	auto ret = s.size(); // position of the first occurrence, if any 
	occurs = 0; // set the occurrence count parameter
	for (decltype(ret) i = 0; i != s.size(); ++i) { 
		if (s[i] == c) {
			if (ret == s.size())
				ret = i;
			++occurs;
		}
	}
	return ret;
}

int main()
{
	string s = "Hellllllo";
	string::size_type ctr;
	auto index = find_char(s, 'o', ctr);
	cout << index << endl;

	return 0;
}