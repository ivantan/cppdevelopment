// Chap 3: String, Vectors, and Arrays
// 'Arrays'

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	// char arrays are special
	// when we init from a string literal, null character is added
	// automatically
	
	char a3[] = "C++"; // '\0' added automatically
	//using list init
	char a1[] = {'C', '+', '+'}; // no null
	char a2[] = {'C', '+', '+', '\0'}; // explicit null
	// size of a2 and a3 is four. a1 is three
	// if the type is const, eg. const char a4[6] and there is no
	// "space" for null char then it will be an error.
	const char a4[6] = "Daniel"; //  is an error
	
	return 0;
}