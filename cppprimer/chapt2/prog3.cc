#include <iostream>
int main()
{
	// pointers to pointers
	int ival = 1024;
	int *pi = &ival; // pi points to an int
	int **ppi = &pi;

	std::cout << "The value of ival\n"
	<< "direct value: " << ival << "\n" 
	<< "indirect value: " << *pi << "\n" 
	<< "doubly indirect value: " << **ppi 
	<< std::endl;
}