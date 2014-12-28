// Chap 4: Expressions
// 4.7 Conditional operator

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
	// dot (.) and arrow (->) op provide for member access
	// ptr->mem is equal to (*ptr).mem
	
	string s1 = "a string", *p = &s1;
	auto n = s1.size(), n2 = (*p).size(), n3 = p->size();
	cout << n << " " << n2 << " " << n3 << endl; 
	
	// consider without parenthesis for (*p).size()
	// the eval would be to find size for a ptr then deref, not possible
	
	return 0;
}
