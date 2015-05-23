#include <iostream>
int main()
{
	int sum = 0, val = 1;
	while (val <= 10) {
  	sum += val;
  	++val; // add 1 to val
		std::cout << sum << std::endl;
	}
	std::cout << "Sum of 1 to 10 inclusive is "
						<< sum << std::endl;
	return 0;
}