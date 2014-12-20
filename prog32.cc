// Chap 3: String, Vectors, and Arrays
// 'string' type

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	// adding two string
	// adding strings yields a new string that is the
	// concatenation of the left, followed by the right
	// operand. you can also use the compound operator '+='
	
	string s1 = "hello, ", s2 = "world\n";
	string s3 = s1 + s2;
	cout << s3 << endl;
	s1 += s2;
	cout << s1 << endl;
	
	// important to note in C++
	// to make it compatible with C, string literals are
	// not strings from the stdlib string
	
	string s4 = "hello";
	string s5 = s4 + ", "; // ok, converted to strings
	string s6 = "hello" + ", "; // error! cannot add literals
	
	return 0;
}
