// 1.5 Classes
// add 2 Sales_item objects
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item2;
	// read ISBN, number of copies sold, and sales price
	std::cin >> item1 >> item2;
	// write ISBN, num of copies of sold, total rev, avg price
	std::cout << item1 + item2 << std::endl;
	return 0;
}