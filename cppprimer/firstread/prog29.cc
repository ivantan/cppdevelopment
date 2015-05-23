// Chap 3: String, Vectors, and Arrays
// 'string' type

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	// reading an unknown number of strings
	string word;
	while (cin >> word) // read until end of file
		cout << word << endl; // write each word + newline
	
	// using 'getline'
	string line;
	while (getline(cin, line))
		cout << line << endl;
	return 0;
}
