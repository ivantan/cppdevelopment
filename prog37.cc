// Chap 3: String, Vectors, and Arrays
// 'vector' type

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	string s("some string");
	if (!s.empty()) 
		s[0] = toupper(s[0]);
	cout << s << endl;
	
	return 0;
}