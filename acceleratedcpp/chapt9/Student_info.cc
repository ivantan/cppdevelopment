#include <iostream>
#include <vector>

#include "grade.h"
#include "Student_info.h"

using std::istream;
using std::vector;

istream& Student_info::read(istream& in)
{
    in >> name >> midterm >> final;
    read_hw(in, homework);
    return in;
}

double Student_info::grade() const
{
    return ::grade(midterm, final, homework);
}