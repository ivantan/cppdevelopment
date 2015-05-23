// Chap 3: String, Vectors, and Arrays
// 'string' type

#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main() 
{
	string s("Hello World!!!");
	// convert s to uppercase
	for (auto c : s) // remember you need to use reference
		c = toupper(c); // assigning, changing the underlying char
	cout << s << endl;
	
	return 0;
}