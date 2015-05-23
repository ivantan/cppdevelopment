// Chap 2: Var ans Basic Types
// built in types include arithmetic types and type void
// arithmetic types are: char, int, boolean, fp
// void type has no val and are common in functions that do not return a val

// show that two string literal appearing adjacent to one another are concat
// show escape seqs
#include <iostream>
int main()
{
	std::cout << '\\';
	std::cout << '\n';
	std::cout << "a really, really long string literal "
				 "that spanks two lines" << std::endl;
	return 0;
}