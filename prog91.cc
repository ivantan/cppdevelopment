// Chap 6: Functions

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
using std::initializer_list;

// how values are return

// never return a reference or pointer to a local object
// example: function that returns a reference to a local obj

const string &manip()
{
	string ret;
	// transform ret in some way
	if (!ret.empty())
		return ret; // wrong: returning a ref to a local obj
	else
		return "EMPTY!"; // wrong: local temp string
}

int main()
{

	return 0;
}
