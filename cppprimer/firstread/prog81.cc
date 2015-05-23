// Chap 6: Functions
// 6.1 Function Basics

#include <iostream>
#include <vector>
#include <stdexcept>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;


int main()
{

	// separately compiling files
	// say, you have a main() function in the file fact.cc
	// and a header file LocalMath.h that declares a function used in main()
	// the function definition is written in LocalMath.cc

	// so you have 3 files: fact.cc LocalMath.h localMath.cc
	// up till now to compile them all we used "clcl fact.cc LocalMath.cc"
	// then run a.out using "ao a.out"

	// in the event you made some changes to fact.cc, but no changes in the rest
	// we need not have to compile all 3 files again, only compile fact.cc
	// to do this, instead of compile all 3 files in "first compilation" by using
	// "clcl fact.cc LocalMath.cc", generate the object files first by using
	// "clcl -c fact.cc" and "clcl -c LocalMath.cc"
	// this produces fact.o and LocalMath.o

	// to recompile only the fact.cc, just regenerate the fact.o by
	// "clcl -c fact.cc"

	// summary:
	// (old method)
	// clcl 1 2 3 4 5
	// ao a.out
	// some changes to file 2
	// clcl 1 2 3 4 5
	// ao a.out
	//
	// (new method)
	// clcl -c 1; clcl -c 2; clcl -c 3; clcl -c 4; clcl -c 5
	// changes to file 2
	// clcl -c 2
	// ao a.out

	return 0;
}
