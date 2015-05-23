// Chap 2: Var and Basic Types - compound types
// const objects

#include <iostream>
int main() 
{	
	// pointers and const
	// like ref, we can def pointers that point to
	// either const or non-const
	
	// like ref to const, a point to const may not be
	// used to change the obj pointed to
	const double pi = 3.14159;
	double *ptr = &pi; // error, nope needs to be a ptr to const
	const double *cptr = &pi; // this is it
	*cptr = 42; // error, trying to assign to const double pi?
	
	// unlike ref to const and 'const ref' where they are the same,
	// const ptr is DIFFERENT from ptr to const, because ptr IS an
	// obj. the differences are, a const ptr, denoted *const ptr
	// implies the stored address of the obj being pointed to, cannot
	// be change - the address cannot be changed. 
	// but, ptr to const implies that the values of the obj cannot be
	// changed through that ptr.
	
	// as an example, a const ptr to const, i.e. const (say, double)
	// *const pip implies that both the address stored and the val
	// of the obj cannot be changed.
	int errNumb = 0;
	// curErr is a const pointer to a non-const int obj
	// can change the value of errNumb with ptr curErr, but the stored
	// address cannot be changed after init because it is const.
	int *const curErr = &errNumb;
	
	// pip is a const pointer to a const (double) obj
	const double *const pip = &pi;
	
	return 0;
}