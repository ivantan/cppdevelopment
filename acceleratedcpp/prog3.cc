// ask for a person's name, and greet the person
#include <iostream>
#include <string>

int main()
{
    // ask for the person's name
    std::cout << "Please enter your first name: ";

    // read the name
    std::string name;         // define name
		// 'name' is the variable used to store our input
    std::cin >> name;         // read into
		// if any whitespace, ignore; then read all the characters 
		// until anoter whitespace or end of file

    // write a greeting
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}