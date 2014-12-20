// Chap 3: String, Vectors, and Arrays
// 'using' Declarations for namespaces

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// headers should not include 'using' declarations

int main() 
{
	cout << "Enter two numbers: " << endl;
	int v1, v2;
	cin >> v1 >> v2;
	cout << "The sum of " << v1 << " and " << v2
		 << " is " << v1 + v2 << endl;
	return 0;
}
