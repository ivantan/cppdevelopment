// Chap 4: Statements
// 5.2 Statement scope

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
	// we define vars inside the control structure of the if,
	// while, switch, and for statements if we want the vars
	// to be visible only within that statement and are out of
	// scope after the statement ends.
	while (int i = get_num()) // i created and init on each iteration
		cout << i << endl;
	i = 0; // error
	
	// just rmb, define outside the scope if you need access to the
	// var
	
	return 0;
}
