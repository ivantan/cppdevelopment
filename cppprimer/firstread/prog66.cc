// Chap 4: Expressions
// 4.11 Type conversion

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;

int main()
{
	// other implicit conversions
	// array to pointer
	int ia[10];
	int* ip = ia; // ia converted to a ptr to the first element
	
	// conversion to bool
	char *cp = get_string();
	if (cp) /* ... */
		;
	while (*cp) /* ... */
		;
	cout << *cp << " " << cp << endl;
	
	return 0;
}
