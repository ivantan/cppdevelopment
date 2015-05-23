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


void reset(int *ip)
{
	*ip = 0;
	ip = 0;
	cout << "local copy of pointer after reset is at " << ip << endl;
}

int main()
{
	// pointer parameters also exhibit the same behavior
	// the ptr itself does NOT change

	int n = 42;
	cout << "ex1: let n be " << n << endl;
	int *ip = &n;
	cout << "ip points to " << *ip << " at " << ip << endl;

	reset(ip);
	cout << "after reset, obj pointed by ip is " << *ip << " at " << ip << endl;
	// ptr itself does not change, but n is now 42
	// ptr copy is changed inside the reset() call to give "0x0"
	cout << "n, pointed by ip is " << n << endl;

	// another example
	// programmers in C use pointer parameters (ex1), while in C++ often use
	// reference parameters instead (ex2)
	int i = 42;
	cout << "ex2: let i be " << i << endl;
	reset(&i);
	cout << "after reset, i becomes " << i << endl;


	return 0;
}
