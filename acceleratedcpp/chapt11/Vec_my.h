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
	// remaining interface
private:
  iterator data;        // first element in the Vec
  iterator limit;       // one past the last element in the Vec
};
