// ask for a person's name, and generate a framed greeting
#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;

    // build the message that we intend to write
    const std::string greeting = "Hello, " + name + "!";
		// use '=' to give a variable a value as it is defined in one line
    // use overloading principle to concatenate a string and a string literal
		
    // build the second and fourth lines of the output
    const std::string spaces(greeting.size(), ' ');
		// using parenthesis to 'construct' the string spaces.
		// '.size()' is a 'member function', that is, 'greeting' has a component
		// named 'size' which is a functionm thus '.size()', the result is the
		// number of characters in 'greeting'
		
		// constructing from an integer value and a char literal results in as
		// many copies of the character as the value of the integer.
		
    const std::string second = "* " + spaces + " *";
	
    // build the first and fifth lines of the output
    const  std::string first(second.size(), '*');
	
    // write it all
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
    
    return 0;
}