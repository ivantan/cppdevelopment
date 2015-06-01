// function for checking palindrome

bool is_palindrome(const string& s)
{
    return equal(s.begin(), s.end(), s.rbegin());
}

// rbegin() returns an iterator but starts at the last element and moves to the first