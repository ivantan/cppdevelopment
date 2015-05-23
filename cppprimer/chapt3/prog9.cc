#include <iostream>
#include <string>
#include <cctype>

using std::cin; 
using std::cout; using std::endl;
using std::string;

int main()
{
	string str("some string");
	for (auto c : str)
		cout << c << endl;
	
	return 0;
}