#include <iostream>
#include <string>
#include "Person_info.h"

using namespace std;

// more about istream; istringstream

int main() 
{
	vector<PersonInfo> people;

	while (getline(cin, line)) {
		PersonInfo info;
		istringstream record(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push(info);
	}
}