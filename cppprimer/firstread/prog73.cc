// Chap 4: Statements
// 5.3 Iter statements

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
	// iterative statements, commonly called loops
	// "while", "for" 
	// test the cond before sec the body
	
	// "do while"
	// exec the body then tests for its cond
	
	// while loop; repeatedly exec a target statem as 
	// long as a cond is true. syntactic form is
	// while (cond)
	// 		statement
	
	vector<int> v;
	int i;
	
	while (cin >> i)
		v.push_back(i);
	
	auto beg = v.begin();
	while (beg != v.end() && *beg >= 0)
		++beg;
	if (beg == v.end())
		;// ...
	
	return 0;
}
