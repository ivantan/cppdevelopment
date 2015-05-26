#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin; 		using std::cout;
using std::endl; 		using std::setprecision;
using std::string; 		using std::streamsize;
using std::sort;		using std::vector;

int main() 
{
	cout << "Enter your midterm and final exam grades: ";
	double midterm, final;
	cin >> midterm >> final;
	
	double x;
	vector<double> homework;
	
	cout << "Enter all your homework grades, "
			"followed by end-of-file: ";
	while (cin >> x)
		homework.push_back(x);

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	
	if (size == 0) {
		cout << endl << "You must enter your grades."
						"Please try again." << endl;
		return 1;
	}
	
	sort(homework.begin(), homework.end());
	
	vec_sz mid = size/2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2
						   : homework[mid];	

	// write the result
	streamsize prec = cout.precision(); 
	cout << "Your final grade is  " << setprecision(3)
		 << 0.2 * midterm + 0.4 * final + 0.4 * median
		 << endl;
	cout << "Finals: " << final << " Midterms: " << midterm
		 << " Homework Median: " << median << setprecision(prec) 
		 << endl;
}