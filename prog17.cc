// Chap 2: Var and Basic Types - compound types
// two kinds of compound types:
// references, and pointers

int main() 
{	
	// pointer is a compound type that 'points to' another type.
	// recall, reference 'refers to', but pointer points to.
	
	// similar to reference, a pointers are used for indirect access
	// to other objects. unlike reference, a point IS an object.
	
	// pointers can be assigned and copied; a pointer can even point
	// to several different objects over its lifetime.
	
	// also note that pointers need not be init at the time it is def
	
	// warning: pointer bugs bedevil even experienced programmers
	
	int *ip1, *ip2; // both ip1 and ip2 are pointers to int
	double dp, *dp2; 
	
	// a point holds the address of another object. we get the address
	// by using the address-of operator, &
	
	int ival = 42;
	int *p = &ival; // p hols the address of ival; p is a pointer to ival
	
	double dval;
	double *pd = &dval;
	// int *pi = pd; error! different types! like reference, dont mix types
	
	return 0;
}