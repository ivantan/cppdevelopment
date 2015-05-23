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

// 6.9. function overloading eliminates the need to invent and remember
// names that exist only to help the compiler figure outwhich funcion to
// call.

int main()
{	
	// example: consider a database app with several functions to find a
	// record based on name, phone num, and so on. the function overlaoding
	// lets us define a collection of functions, each named lookup, that
	// differ in terms of how they do the search. we can call loockup 
	// passing a value of any sever types.
	Record lookup(const Account&);
	Record lookup(const Phone&);
	Record lookp(const Name&);
	
	Account acct;
	Phone phone;
	Record r1 = lookup(acct);
	Record r2 = lookup(phone);
	
	// it is an error for two functions to differ only in terms of their
	// return types. if the param lists of two functions match but the
	// return types differ, then the second declaraton is an error.
	// for example:
	
	Record lookup(const Account&);
	bool lookup(const Account&); // error
	
	return 0;
}
