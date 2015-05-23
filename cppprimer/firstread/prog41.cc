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
	// like vectors, arrays are containers for unnamed objects of a single
	// type we can access by position. unlike vectors, arrays have FIXED
	// size, we cannot add elements to an array.
	// but of the inflexibility, arrays can sometimes offer better run-time
	// performance for specialised applications.
	
	// tip given: if you do not know exactly how many elements you need,
	// use a vector.
	
	// arrays are a compound type; declaration has form a[d] where a is the
	// name being defined and d is the dim of the array greater than zero.
	// the number of elements in an array is part of the array's type, thus
	// dim must be known at compile time, this means that dim must be a 
	// const expression.
	
	unsigned cnt = 42; // not a const expression
	constexpr unsigned sz = 42; // const expression
	
	int arr[10]; // array of ten ints
	int *parr[sz]; // array of 42 pointers to int
	string bad[cnt]; // error, cnt is not const expr
	string strs[get_size()]; // ok if get_size is constexpr, else err
	
	return 0;
}