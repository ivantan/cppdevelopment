#include <iostream>
#include "Sales_item.h"

using std::cin; using std::cout; using std::endl;

int main()
{
	Sales_item item1, item2;

	// writing a handler
	while (cin >> item1 >> item2) {
		try {
			if (item1.isbn() != item2.isbn()) {
				throw std::runtime_error("Data must refer to same ISBN");
			}
			cout << item1 + item2 << endl;
			// if addition fails, throw a runtime err exception
		} catch (std::runtime_error err) {
			cout << err.what()
				 << "\nTry Again? Enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break; // break out of while loop
		}
	}
	return 0;
}