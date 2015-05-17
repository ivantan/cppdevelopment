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


void reset(int &ip)
{
	ip = 0;
}

int main()
{
	// passing arguments by reference
	int n=0, i=42;
	int &r=n; // r is bound to n (or r is another name for n)
	r=42; // n is now 42
	r=i; // n now has the same value as i
	i=r; // i has the same value as n

	int j=42;
	reset(j);
	cout << "j = " << j << endl; // should print j = 0

	return 0;
}
