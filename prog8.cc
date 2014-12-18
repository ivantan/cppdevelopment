// 1.5 Classes
#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item book;
	// read ISBN, number of copies sold, and sales price
	std::cin >> book;
	// write ISBN, num of copies of sold, total rev, avg price
	std::cout << book << std::endl;
	return 0;
}