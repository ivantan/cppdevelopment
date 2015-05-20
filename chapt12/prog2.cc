#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <list>

using namespace std;

int main()
{
	auto p = make_shared<int>(42);
	auto q(p);
	auto r = make_shared<int>(42); // int to which r points has one user
	r = q; 
	// assign to r, making it point to a different address
	// increase the use count for the object to which q points
	// reduce the use count of the object to which r had pointed
	// the object r had pointed to has no users; that object is automatically freed
	
	return 0;
}
