int main()
{
	/* some symbols have multiple meanings */
	int i = 42;
	int &r = i; // & follows a type and is part of a declaration; r is a reference
	int *p; // * follows a type and is part of a declaration; p is a pointer
	p = &i; // & is used in an expression as the address-of op
	/* the last 2 lines is equal to, "int *p = &i" */

	*p = i; // * is used in an expr as the deref op
	
	int &r2 = *p; // & is part of the declaration; * is the dereference operator
}