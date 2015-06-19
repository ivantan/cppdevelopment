#include <iostream>

using std::cout;		using std::endl;

int main()
{
	int x = 3;
	int* p = &x;
	cout << x << endl;
	
	// here int* p is the same as int *p
	
	// but note that int* p, q is not equal to
	// int *p, *q
	
	// to be more specific, int* p, q is equal to
	// int *p
	// int q
	// or int (*p), q or
	
	*p = 6;
	cout << x << endl;
	
	return 0;
}