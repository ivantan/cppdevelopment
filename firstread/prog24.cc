// Chap 2: Var and Basic Types
// defining own data struct

#include <iostream>

// write your class using the 'struct' keyword (there also 
// a 'class' keyword, to be introduced much later.
struct Sales_data {
	std::string bookNo;
	unsigned units_sold;
	double revenue;
}; // must have a semicolon here, else error!
struct Sales_data accum, trans, *salesptr;

// data members of the class
// bookNo of type string, units_sold of type unsigned
// revenue of type double. each Sales_data obj will have
// these three data members.

int main() 
{	
	return 0;
}