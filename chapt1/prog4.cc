#include <iostream>
int main()
{
	int sum = 0;
	/* use a "for" loop instead of "while" in prog3.cc
	 *
	 */
	for (int val = 1; val <= 10; ++val) 
  	sum += val;
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}