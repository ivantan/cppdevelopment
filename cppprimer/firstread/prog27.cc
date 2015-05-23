// Chap 3: String, Vectors, and Arrays
// 'string' type

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	string s1; // s1 is the empty string
	string s2 = s1; // s2 is a copy of s1
	string s3 = "hiya"; // a copy of string literal
	string s4(10, 'c'); // weirder way to init, 10 copies of c
	cout << s4 << endl; // but gives cccccccccc
	
	return 0;
}
