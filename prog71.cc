// Chap 4: Statements
// 5.3 Conditional scope

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
	// if "break" is not given in a case
	
	unsigned vowelCnt = 0;
	// e.g counts total number of vowels
	// ...
	switch (ch)
	{
		// any occurence of a, e, i, o, u incre vowelCnt
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		++vowelCnt;
		break;
	}
	
	return 0;
}
