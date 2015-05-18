#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <map>
#include <set>

using namespace std;

int main()
{
	// count the number of times each word occurs in the input
	map<string, size_t> word_count; // empty map from string to size_t 
	set<string> exclude = {"The", "But", "And", "Or", "An", "A", 
						   "the", "but", "and", "or", "an", "a"};
	string word;
	while (cin >> word)
		// count only words that are not in exclude
		if (exclude.find(word) == exclude.end())
			++word_count[word]; // fetch and increment the counter for word}
	for (const auto &w : word_count) // for each element in the map
	// print the results
	cout << w.first << " occurs " << w.second
		 << ((w.second > 1) ? " times" : " time") << endl;
}
