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
	// default case label
	// if ch is a vowel increment the appropriate cnt
	int vowelCnt = 0, otherCnt = 0;
	switch (ch) {
		case 'a': case 'e': case 'i': case 'o': case 'u':
			++vowelCnt;
			break;
		default: // is exec when no case label matches
			++otherCnt;
			break;
	}
	
	return 0;
}
