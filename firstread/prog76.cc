// Chap 4: Statements
// 5.5 Jump statements

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
	// C++ has four jump statements
	// break, continue, goto, and return
	
	// continue statement terminates the current iter
	// of the nearest enclosing loop and immed begins
	// the next iter.
	
	// e.g. the following loop reads the std input one
	// word at a time. only words that begin with an 
	// underscore will be processed. for any other val, 
	// we terminate the current iter and get the next input
	
	string buf;
	while (cin >> buf && !buf.empty()) {
		if (buf[0] != '-')
			continue; // get another input
	}
	
	// goto syntatic form
	// goto label;
	// label:

	// you can "jump forward" or "jump backward" with goto
	// e.g. forward
	
		// ...
		goto end;
		int ix = 10;
	end:
	// error due to bypassed declar
		ix = 42;
	
	// e.g. backward
	begin:
		int sz = get_size();
		if (sz <= 0) {
			goto begin;
		}
		
	return 0;
}
