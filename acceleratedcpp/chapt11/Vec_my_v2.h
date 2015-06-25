// extending from Vec_my.h
// now with Copy control

template <class T> class Vec {
public:
	// type definitions
	typedef T* iterator;
	typedef const T* const_iterator;
	typedef size_t size_type;
	typedef T value_type;
	
	// constructions
	Vec() { create(); }
	explicit Vec(size_type n, const T& val = T()) { create(n, val); }
	
	Vec(const Vec& v) { create(v.begin(), v.end()); } // copy constructor
	Vec& operator=(const Vec&); // assignment operator
	~Vec() { uncreate(); } // destructor

  // size and index
  size_type size() const { return limit - data; }

  T& operator[](size_type i) { return data[i]; }
  const T& operator[](size_type i) const { return data[i]; }
	
  // return iterators
  iterator begin() { return data; }                 
  const_iterator begin() const { return data; }     

  iterator end() { return limit; }                  
  const_iterator end() const { return limit; }      
	
private:
  iterator data;        // first element in the Vec
  iterator limit;       // one past the last element in the Vec
};

template <class T>
Vec<T>& Vec<T>::operator=(const Vec& rhs)
{
    // check for self-assignment
    if (&rhs != this) {

        // free the array in the left-hand side
        uncreate();

        // copy elements from the right-hand to the left-hand side
        create(rhs.begin(), rhs.end());
    }
    return *this;
}