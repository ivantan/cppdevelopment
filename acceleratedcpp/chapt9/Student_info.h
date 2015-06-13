#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <string>
#include <vector>

struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;

	// below are additions
    std::istream& read(std::istream&);     // added 
    double grade() const;                  // added
};

#endif