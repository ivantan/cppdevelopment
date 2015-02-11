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

	return 0;
}
