#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <map>
#include <set>

using namespace std;

// don't understand why this doesn't work

int main()
{
	pair<string, int>
	process(vector<string> &v)
	{
		// process v
		if (!v.empty())
			return {v.back(), v.back().size()};
		else
			return pair<stirng, int>();
	}
}
	
