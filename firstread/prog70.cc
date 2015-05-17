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
	// the switch statement
	// e.g. count how often each of the five vowels appears in some
	// segment of text
	// init counters for each vowels
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt =0;
	char ch;
	while (cin >> ch) {
		// if ch is a vowel, increm the appro counter
		switch (ch) {
			case 'a':
				++aCnt;
				break;
			case 'e':
				++eCnt;
				break;
			case 'i':
				++iCnt;
				break;
			case 'o':
				++oCnt;
				break;
			case 'u':
				++uCnt;
				break;
		} // "break" transfers control out of "switch"
	}
	cout << "a: " << aCnt << endl;
	cout << "e: " << eCnt << endl;
	cout << "i: " << iCnt << endl;
	cout << "o: " << oCnt << endl;
	cout << "u: " << uCnt << endl;
	
	// case keyword must be integral constant expr
	
	return 0;
}
