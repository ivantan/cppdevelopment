#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using std::cin; 
using std::cout; using std::endl;
using std::string; using std::vector;

int main()
{
	string word;
	vector<string> text; // empty vector
	while (cin >> word) {
		text.push_back(word); // append word to text 
	}
	for (auto c : text)
		cout << c << endl;
}