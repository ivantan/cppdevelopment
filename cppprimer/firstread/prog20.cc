// Chap 2: Var and Basic Types - compound types
// void type pointers

#include <iostream>
int main() 
{	
	// void pointers, void*
	// a special pointer type that can hold the address of ANY obj
	// it holds an address, like prev discussed pointers,
	// but the type of the obj at that add is unknown
	
	double obj = 3.14, *pd = &obj;
	std::cout << *pd << " " << pd << std::endl;
	// void* can hold the add val of any data pointer type
	void *pv = &obj;
	pv = pd;
	
	// pointers to pointers
	int ival = 1024;
	int *pi = &ival;
	std::cout << *pi << " " << pi << std::endl;
	int **ppi = &pi;
	std::cout << **ppi << " " << *ppi << " " << ppi << std::endl;
	std::cout << "The value of ival\n"
		 	  << "direct value: " << ival << "\n"
		 	  << "indirect value: " << *pi << "\n"
		 	  << "doubly indirect value: " << **ppi
		 	  << std::endl;
	
	// reference to pointers
	// since pointers are objects, we can define a reference to a pointer
	int i = 42;
	int *p; // p is a pointer to int
	int *&r = p; // r is a reference to pointer p
	
	r = &i; // r refers to a pointer, assign &i to r makes p point to i
	std::cout << *r << " " << r << std::endl;
	*r = 0; // deref r yields i, the obj to which p points, changes i
	std::cout << *r << " " << r << std::endl;
	
	return 0;
}