// Chap 2: Var and Basic Types
// extern is used when you want declare but NOT define the var
// eg. to use a var in more than one file, requires declarations
// that are sep from the var definitions. to use the same var in
// multiple files, we define that var in one (and only one) file.
// other files that use that var must declare, but not define, that var.

int main()
{
	int ix = 1024;
	extern int iy; // declares but does not define iy
	return 0;
}