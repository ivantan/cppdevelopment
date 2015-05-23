#include <iostream>
#include "Sales_item.h"

using std::cin; using std::cout; using std::endl;
using std::cerr;

int main()
{
	Sales_item item1, item2;
	cin >> item1 >> item2;
	// first check that item1 and item2 represent the same book 
	if (item1.isbn() != item2.isbn()) {
		throw std::runtime_error("Data must refer to same ISBN");
	cout << item1 + item2 << endl;
	}
	return 0;
}