#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main()
{
	vector<string> vec1 = {"Hello", "World"};
	vector<string> vec2 = {"Hello", "Worlds", "Extra s!"};
	bool are_thesame = equal(vec1.cbegin(), vec1.cend(), vec2.cbegin());
	cout << "Result of comparison using 'equal': " << are_thesame << endl;

}