#ifndef GUARD_Student_info_v2
#define GUARD_Student_info_v2

#include <string>
#include <vector>

class Student_info {
public:
	std::string name() const { return n; } // accessor function
	bool valid() const { return !homework.empty(); }
	
	double grade() const;
    std::istream& read(std::istream&);
private:
    std::string n;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);

#endif