struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;

	// below are additions
    std::istream& read(std::istream&);     // added 
    double grade() const;                  // added
};

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