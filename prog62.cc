// Chap 4: Expressions
// 4.9 sizeof

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
	// sizeof op returns a size, in byte of an expr or a type name
	// sizeof is right assoc, the return type is size_t and const.
	// there are two forms:
	// sizeof (type) and sizeof expr
	
	Sales_data data, *p;
	sizeof(Sales_data);
	sizeof p;

	return 0;
}
