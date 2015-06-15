#include <iostream>

using std::cout;		using std::endl;

int main()
{
	int x = 3;
	int* p = &x;
	cout << x << endl;
	
	*p = 6;
	cout << x << endl;
	
	return 0;
}