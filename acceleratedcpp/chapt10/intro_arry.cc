#include <cstddef>
#include <iostream>
#include <vector>

using std::cout;			using std::endl;
using std::vector;

int main()
{
	const size_t Ndim = 3; // need to know size of array
	double coords[Ndim]; // defining an array
	
	*coords = 1.5;
	cout << coords[0] << endl; // should print 1.5
	
	cout << coords << endl; // address of initial element
	cout << coords + 1 << endl; // address of element number 1
	
	cout << *(coords + 1) << endl; // should print 0
	*(coords + 1) = 2.5; // change value of element ot 2.5
	cout << *(coords + 1) << endl; // expected: 2.5
	
	// copy coords to a vector v
	// to show how pointer arithmetic is used as a valid off-
	// the-end iterator
	
	vector<double> v;
	copy(coords, coords + Ndim, back_inserter(v));
	// which is equivalent to
	vector<double> v2(coords, coords + Ndim);
	
	// the way to initialise array explicitly
	// example: days in a month of a year
	// month 0 is January, ... , month 11 is December
	
	const int month_lengths[] = {
		31, 28, 31, 30, 31, 30,
		31, 31, 30, 31, 30, 31
	};
	
	// lets print out the length of months in a year
	cout << "No. of days in the month of January is " << 
		month_lengths[0] << endl;
	cout << "No. of days in the month of February is " << 
		month_lengths[1] << endl;
	cout << "No. of days in the month of March is " << 
		month_lengths[2] << endl;
	cout << "No. of days in the month of November is " << 
		month_lengths[10] << endl;
	cout << "No. of days in the month of December is " << 
		month_lengths[11] << endl;
	
	return 0;
}
