#include <cstddef>
#include <iostream>
#include <cstring>
#include <string>

using std::cout;			using std::endl;
using std::string;

// one way to implement strlen is as follows
// see strlen used in main
size_t strlen2(const char* p)
{
	size_t size = 0;
	while (*p++ != '\0')
		++size;
	return size;
}

int main()
{
	const char hello[] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	cout << strlen(hello) << endl;
	cout << strlen2(hello) << endl;
	
	// hello[] variable is the same as the string literal 'Hello'
	cout << "Hello" << endl;
	cout << hello << endl;
	
	// cannot compare "Hello" to the array because of type
	// instead, convert both to string using copy
	string s(hello);
	string s2("Hello");
	cout << (s == s2) << endl;
	
	// we can also initialize string using pointer to the first
	// element of array hello
	string s3(hello, hello + strlen(hello));
	cout << s3 << endl;
	
	return 0;
}