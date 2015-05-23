#include <iostream>
#include <vector>

int main() 
{
	std::vector<int> vec = {1, 2, 3, 42, 5};
	int val = 42; // value we'll look for
	//result will denote the element we want if it's in vec, or vec.cend() if not
	auto result = find(vec.cbegin(), vec.cend(), val);
	// report the result
	std::cout << "The value " << val 
			  << (result == vec.cend()
			  	? " is not present" : " is present") << std::endl;

	return 0;
}