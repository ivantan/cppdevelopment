#include <string>

class HasPtr {
	friend void swap(HasPtr&, HasPtr&);
public:
    HasPtr(const std::string &s = std::string()): 
		ps(new std::string(s)), i(0) { }

		// each HasPtr  has its own copy of the string to which ps points
    HasPtr(const HasPtr &p): 
			ps(new std::string(*p.ps)), i(p.i) { }
	HasPtr& operator=(const HasPtr &);
	~HasPtr() { delete ps; }
private:
    std::string *ps;
    int i;
};

inline
	void swap(HasPtr &lhs, HasPtr &rhs)
{
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
}

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
	auto newp = new std::string(*rhs.ps); // copy the underlying str
	delete ps; 
	ps = newp;
	i = rhs.i; 
	return *this; // return this object
}

int main()
{ 
	return 0;
}  
