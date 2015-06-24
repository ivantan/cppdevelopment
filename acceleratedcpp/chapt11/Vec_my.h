// implementing the Vec class

template <class T> class Vec {
public:
	// TODO utility function to use deal with private elements
	typedef T* iterator;
	typedef const T* const_iterator;
	typedef size_t size_type;
	type T value_type;
	
	Vec() { create(); }
	explicit Vec(size_type n, const T& val = T()) { create(n, val); }

  // new operations: size and index
  size_type size() const { return limit - data; }

  T& operator[](size_type i) { return data[i]; }
  const T& operator[](size_type i) const { return data[i]; }
	
  // new functions to return iterators
  iterator begin() { return data; }                 // added
  const_iterator begin() const { return data; }     // added

  iterator end() { return limit; }                  // added
  const_iterator end() const { return limit; }      // added
private:
  iterator data;        // first element in the Vec
  iterator limit;       // one past the last element in the Vec
};
