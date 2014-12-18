// 1.5 Classes
// add 2 Sales_item objects
// checks addition is upon same isbn
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item2;
	// read ISBN, number of copies sold, and sales price
	std::cin >> item1 >> item2;
	// checks that item1 and item2 represent the same book
	if (item1.isbn() == item2.isbn()) {
		std::cout << item1 + item2 << std::endl;
		return 0; // indicate success
	} else {
		std::cerr << "Data must refer to same ISBN" << std::endl;
		return -1; // indicate failure
	}
}