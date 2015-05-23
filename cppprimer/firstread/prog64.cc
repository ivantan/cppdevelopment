// Chap 4: Expressions
// 4.11 Type conversion

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;

int main()
{
	int ival = 3.541 + 3;
	cout << ival << endl;
	
	// there is a loss of precision. but more imptly there is a type
	// conversion. when two types are related, we can use an obj or val of
	// one type where an operand of the related type is expected. two
	// types are related if there is a conversion btwn them.
	
	// understanding arithmetic conversions; many e.g.
	bool flag; 		char cval;
	short sval;		unsigned short usval;
	int ival;		unsigned int uival;
	long lval;		unsigned long ulval;
	float fval;		double dval;
	
	3.14159L + 'a'; 	// 'a' promoted to int, then converted to long dble
	dval + ival; 		// ival converted to dble
	dval + fval;		// fval converted to dble
	ival = dval;		// dval converted to int
	flag = dval;
	cval + fval;		// cval promoted to int, then int converted to float
	sval + cval;		// sval and cval promoted to int
	cval + lval;		// cval converted to long
	ival + ulval;		// ival converted to unsigned long
	usval + ival;		// promotion depends on size of unsigned short and int
	uival + lval;		// conversion depends on size of unsigned int and long
	
	return 0;
}
