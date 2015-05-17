// Chap 6: Functions

#include <iostream>
#include <vector>
#include <stdexcept>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;
using std::initializer_list;


int main()
{	
	// determing whether two param types differ
	// 2 param lists can be identical, even if they dont look the same
	
	Record lookup(const Account &acct);
	Record lookup(const Account&);
	
	typedef Phone Telno; // type alias s2.5.1.
	Record lookup(const Phone&);
	Record lookup(const Telno&); Telno and Phone are the same type
	
	return 0;
}
