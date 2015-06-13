#include <iostream>
#include <vector>

#include "grade.h"
#include "Student_info_v2.h"

using std::istream;
using std::vector;

double Student_info::grade() const
{
    return ::grade(midterm, final, homework);
}

bool compare(const Student_info& x, const Student_info& y)
{
    return x.name() < y.name();
}

istream& Student_info::read(istream& in)
{
    in >> name >> midterm >> final;
    read_hw(in, homework);
    return in;
}