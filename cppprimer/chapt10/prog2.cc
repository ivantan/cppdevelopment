#include <iostream>
#include <vector>

int main() 
{
	int ia[] = {11, 22, 33, 44, 55};
	int val = 42; // value we'll look for
	//result will denote the element we want if it's in vec, or vec.cend() if not
	int* result = std::find(std::begin(ia), std::end(ia), val);
	// report the result
	std::cout << "The value " << val 
			  << (result == std::end(ia)
			  	? " is not present in the array" : " is present in the array") << std::endl;

	return 0;
}