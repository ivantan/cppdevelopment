// Chap 2: Var and Basic Types - compound types
// two kinds of compound types:
// references, and pointers

int main() 
{	
	// a 'reference' defines an alternative name for an object.
	// a reference tpye 'refers to' another type. we def a reference
	// type by writing a declarator of the form &d, where d is the
	// name being declared.
	
	int ival = 1024;
	int &refVal = ival;
	int &refVal2; // error: reference not initialised
	
	// a reference IS only an alias
	// thus, a reference is not an object, just another name
	// for an already existing object.
	
	// int &refVal4 = 10; is an error, since 10 is a literal not an object
	double dval = 3.14;
	// int &refVal5 = dval; is an error, initializer (dval) must be int
	
	return 0;
}