// 1.4 Flow of Control
// for form
#include <iostream>
int main()
{
	int sum = 0, val = 1;
	// sum values from 1 through 10 inclusive
	for (int val = 1; val <= 10; ++val)
		sum += val; // asigns sum + val to sum
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}