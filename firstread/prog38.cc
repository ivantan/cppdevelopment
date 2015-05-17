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
	// adding elements to vectors
	vector<int> v2;
	for (int i = 0; i != 100; ++i)
		v2.push_back(i); // append sequential int to v2
	// end of loop v2 has 100 elements 0 ... 99
	
	// it is often better to start with an empty vector
	// then 'grow' it efficiently
	
	// eg. using vector to store words from std input
	string word;
	vector<string> text;
	while (cin >> word) {
		text.push_back(word);
	}
	for (auto eword : text)
		cout << eword << " ";
	cout << endl;
	// in addition to push_back, vector provides a few
	// other operations, like string, for e.g.
	// v.empty(), v.size, v[n], v1 == v2
	
	return 0;
}