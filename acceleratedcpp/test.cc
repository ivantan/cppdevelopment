#include <iostream>
#include <string>

int main()
{
	std::cout << "please enter a string, i'll repeat it." 
		<< std::endl;
	
	std::string s;
	std::cin >> s;
	std::cout << s << std::endl;
	
	return 0;
}