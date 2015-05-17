// 1.5 Classes
// full bookstore program
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item total; // var to hold data for the next trans
	// read first trans and ensure there are data to process
	if (std::cin >> total) {
		Sales_item trans;
		// read, process the remaining trans
		while (std::cin >> trans) {
			// same book?
			if (total.isbn() == trans.isbn()) {
				total += trans; // update running total
			} else {
				// print result for prev book
				std::cout << total << std::endl;
				total = trans; // total now refers to the next book
		}
	}
	std::cout << total << std::endl; // print the last trans
	} else {
		// no input, warning
		std::cerr << "No data?!" << std::endl;
		return -1; // indicate failure
	}
	return 0;
}