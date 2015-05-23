// Chap 2: Var and Basic Types - compound types
// const objects

#include <iostream>
int main() 
{	
	const int bufSize = 512;
	return 0;
	
	// refererences to const
	const int ci = 1024;
	const int &r1 = ci; // both reference and obj are const
	r1 = 42; // error, read only (const) not assignable
	int &r2 = ci; // error, try to bind r2 to type int?
	
	// reference to const to an obj says nth about whether
	// the underlying obj is const. e.g.
	
	int i = 42;
	int &r11 = i; // nothing is wrong
	const int &r22 = i; // nth wrong here too
	r1 = 0; // assign through ref, i val is now 0
	r2 = 0; // error, r2 is declared a ref to const, can't assign
}