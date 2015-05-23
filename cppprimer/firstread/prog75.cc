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
	
	// break terminates the nearest enclosing while, do,
	// for or switch statement. Exec resumes at the statement
	// immed following the ternimated statement
	
	string buf;
	while (cin >> buf && !buf.empty()) {
		switch(buf[0]) {
		case '-':
		// process up to first blank
			for (auto it = buf.begin()+1; it != buf.end(); ++it) {
				if (*it == '-')
					break; // leaves the for loop
				// ...
			}
			// break transfer control here
			// remaining '-' processing:
			break; // leaves the switch statement
		case '+':
			// ...
		} // end switch
		// end of switch break #2 transfer control here
	}
	
	return 0;
}
