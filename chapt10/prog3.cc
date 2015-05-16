#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3};
	int sum = accumulate(vec.cbegin(), vec.cend(), 0);
	cout << "Sum of the int vector is " << sum << endl;

	vector<string> vec2 = {"Hello", "World"};
	string sum2 = accumulate(vec2.cbegin(), vec2.cend(), string(""));
	cout << "Sum of the string vector is " << sum2 << endl;
}