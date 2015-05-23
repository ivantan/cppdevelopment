#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <list>

using namespace std;

int main()
{
	shared_ptr<string> p1;
	shared_ptr<list<int>> p2;
	
	// if p1 is not null, check whether it's the empty string
	if (p1 && p1->empty())
	*p1 = "hi"; 
	// if so, dereference p1 to assign a new value to that string
	
	// using make_shared
	shared_ptr<int> p3 = make_shared<int>(42);
	shared_ptr<string> p4 = make_shared<string>(10, '9');
	shared_ptr<int> p5 = make_shared<int>();
	
	return 0;
}
