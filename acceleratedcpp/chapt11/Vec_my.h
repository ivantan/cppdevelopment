// implementing the Vec class

template <class T> class Vec {
public:
	// TODO utility function to use deal with private elements
	Vec() { create(); }
	explicit Vec(size_type n, const T& val = T()) { create(n, val); }
	
private:
  T* data;        // first element in the Vec
  T* limit;       // one past the last element in the Vec
};
