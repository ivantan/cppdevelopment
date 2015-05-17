// Chap 6: Functions
// 6.1 Function Basics

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

	// test branch
	// e.g. writing a function
	// factorial(n)
	
	// for n =5, 1*2*3*4*5 = 120
	
	// factorial of val is val*(val-1)*(val-2)*...*2*1

int fact(int val)
{
	int ret = 1; // local val to hold the result
	while (val > 1)
		ret *= val--; // asign ret*val to ret then decre
	return ret;
}

int main()
{
	int j = fact(5); // j = 120
	cout << "5! is " << j << endl;
	
	return 0;
}
