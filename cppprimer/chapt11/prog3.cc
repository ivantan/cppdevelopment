#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <map>
#include <set>

using namespace std;

int main()
{
	pair<string, string> anon;
	pair<string, size_t> word_count;
	pair<string, vector<int>> line;
	
	// as an example of a pair
	pair<string, string> author{"James", "Joyce"};
	
	// printing a pair
	cout << author.first << " and " << author.second << endl;
	
	return 0;
}
