#ifndef GUARD_Student_info_v3
#define GUARD_Student_info_v3

#include <string>
#include <vector>

class Student_info {
public:
	//INTERFACE 
	// constructors
    Student_info()                 // construct an empty Student_info object
    Student_info(std::istream&);   // construct one by reading a stream 
    // accessor function
	std::string name() const { return n; } 
	bool valid() const { return !homework.empty(); }
	
	double grade() const;
    std::istream& read(std::istream&);
private:
	//IMPLEMENTATION
    std::string n;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);

#endif