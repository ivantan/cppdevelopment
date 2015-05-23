// Chap 4: Expressions
// 4.5 increment and decrement op

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
	// compound expression; combining deref and increment in
	// a single expr
	
	vector<int> v = {1, 2, 3, 4, 5};
	auto pbeg = v.begin();
	while (pbeg !=v.end() && *pbeg >= 0)
		cout << *pbeg++ << endl;
	
	// easier to remember that ++ has a higher precedence than
	// dereference operator, thus *pbeg++ is equal to
	// *(pbeg++)
	
	// without using compound expr, we could also rewrite
	// cout << *iter++ << endl; as
	// cout << *iter << endl;
	// ++iter; which is more verbose and error-prone
	
	return 0;
}
