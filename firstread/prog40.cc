// Chap 3: String, Vectors, and Arrays
// 'iterators'

#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() 
{
	// iterator types, like size_type are not as important
	// to remember, but they are defined as iterator and
	// const_iterator
	// e.g. vector<int>::iterator it;
	// string::iterator it2;
	// vector<int>::const_ iterator it3; just like a const ptr
	
	// note that, if a vector is constant, as in const vector<int>,
	// doing .begin() or .end() on the obj will return a type
	// of vector<int>::const_iterator
	
	// to specifically ask for a const_terator type be returned
	// use .cbegin() instead of .begin(), and .cend() v.v.
	
	// deference and member access
	// (*it).empty() can be written simply as, it->empty()
	
	// arithmentic operations on iterators
	// eg. computer an iterator to the element closest to the midpoint
	vector<int> vi{"one", "two", "three", "four"};
	auto midpoint = vi.begin() + vi.size() / 2;
	// rmb that subscripts start at 0
	
	// eg. of an algorithm using iterator arithmetic is binary search
	// text must be sorted
	// beg and end will denote the range we're searching
	// program won't work, incomplete example from book
	// 'text' and 'sought' not init
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg)/2; // orig midpoint

	// while there are still elements to look at and we haven't
	// found sought
	while (mid != end && *mid != sought) {
		if (sought < *mid) // is the element we want in the first half?
			end = mid; // if so adjust range to ignore second half
		else
			beg = mid + 1; // start looking with the element after mid
		mid = beg + (end - beg)/2; // new midpoint
	}
	return 0;
}