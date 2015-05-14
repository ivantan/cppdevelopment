#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cin; 
using std::cout; using std::endl;
using std::string; using std::vector;

int main()
{
	vector<int> v2;
	for (int i = 0; i != 100; ++i)
		v2.push_back(i);
	for (auto c : v2)
		cout << c << endl;
}