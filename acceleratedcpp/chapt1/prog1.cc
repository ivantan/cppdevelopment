// a small C++ program
// using '//' is how you comment

#include <iostream> 
// programs ask for library facilities using the '#include' directives
// here iostream is a header file part of the standard library, so using '<' and '>'

int main()
{
    std::cout << "Hello, world!" << std::endl;
    // cout is part of the namespace std, using '::'
    // endl ends the current line of output, any more output would appear
    // on a new line

    return 0;
}