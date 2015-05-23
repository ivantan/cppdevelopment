// 1.4 Flow of Control
#include <iostream>
int main()
{
	int sum = 0, val = 0;
	// reading until end-of-file, calc a running total of all vals read
	while (std::cin >> val)
		sum += val; // asigns sum + val to sum
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}