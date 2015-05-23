// Chap 3: String, Vectors, and Arrays
// 'vector' type

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	// a vector is a class template
	// think of template as instructions to the
	// compiler for generating classes or functions
	
	// the process that a compiler uses to create class or
	// functions from templates is called 'instantiation'
	
	// for a class template, we specify what kind of class
	// we want the compiler to instantiate, that is, by
	// supplying additional information inside a pair of 
	// angle brackets following the template's name
	
	vector<int> ivec; // ivec holds obj of type int
	// vector<Sales_items> Sales_vec;
	vector<vector<string>> file; // vector whose elements are vectors
	 
	// note that oilder compilers may require the old-style decl
	// with additional space for a vector of vectors, vector<vector<type> >
	
	// init by list of initialisers
	vector<string> articles = {"a", "an", "the"};
	// only use curly braces for list init, parenthesis not allowed
	vector<string> articles2{"a", "an", "the"};
	cout << articles[1] << endl;
	
	// init by "number of elements"
	vector<string> svec(10, "hi!");
	cout << svec[1] << endl;
	
	// summary of how to init a vect
	vector<int> v1(10); // vec of 10 elements of 0
	vector<int> v2{10}; //  vec of an element of 10
	vector<int> v3(10, 1); // vec of 10 ele of 1
	vector<int> v4{10, 1}; // vec of 2 elements
	
	return 0;
}