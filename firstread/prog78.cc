// Chap 4: Statements
// 5.6 try blocks and exception handling

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
	// try syntatic form
	/*
	try {
		program-statements
	} catch (exception-declaration) {
		handler-statements
	} catch (exception-declaration) {
		handler-statements
	} // ...
	*/
	
	// e.g. adding two Sales_items
	while (cin >> item1 >> item2) {
		try {
			// exec code that adds two Sales_items
			// if the addition fails, code throws a runtime_error
			// exception
		} catch (runtime_error err) {
			// remind the user that the ISBNs must match and prompt
			// for another pair
			cout << err.what()
				 << "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break; // break out of the while loop
		}
	}
	
	// in C++ there are standard exceptions classes
	// defined in <stdexcept>:
	// exception, runtime_error, range_error, overflow_error,
	// underflow_error, logic_error, domain_error, invalid_argument
	// length_error, out_of_range
	
		
	return 0;
}
