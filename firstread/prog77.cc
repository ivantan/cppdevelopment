// Chap 4: Statements
// 5.6 try blocks and exception handling

#include <iostream>
#include <vector>
#include <stdexcept>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;

int main()
{
	// throw: the detecting part of a program uses a throw
	// expr to raise an exception. a throw consists of the 
	// keyword throw followed by an expr. the type of the expr
	// deetermines what kind of exception is thrown. a throw expr
	// is usually followed by a semicolon, making it into an
	// expr statement
	
	// e.g. Add two object type Sales_item
	// program checks whether the records it read referred to
	// the same book. if not, it printed a message and exited.
	
	Sales_item item1, item2;
	cin >> item1 > item2;
	// first check that item1 and item2 rep the same book
	if (item1.isbn() == item2.isbn()) {
		cout << item1 + item2 << endl;
		return 0; // success
	} else {
		cerr << "Data must refer to the same ISBN" << endl;
		return -1; // failure
	}
	
	// a better program, separate the part of adding with the part
	// that manages the interaction with a user
	
	// first check that the data are for the same item
	if (item1.isbn() != item2.isbn())
		throw runtime_error("Data must refer to same ISBN");
		// if we're still here the ISBNs are the same
	cout << item1 + item2 << endl;
		
	return 0;
}
