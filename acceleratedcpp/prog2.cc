#include <iostream>

int main()
{
    std::cout << "Hello, world!" << std::endl;
    // the above is also called an 'expression'
    // some expression has side effects, like the above which writes 
    // 'Hello, world!' on the standard output stream and ends line.

    // expressions contain operators and operands
    // in the above, '<<' is an operator
    // 'std::cout', 'std::endl;' and 'Hello, World!' are operands.

    // Every operand has a type!
    // for example 'std::cout' has the type 'std::ostream'

    // The '<<' operator takes two operands, but this operator is
    // LEFT-ASSOCIATIVE, so in the above it is equivalent to:

    (std::cout << "Hello, world again!") << std::endl;
    // where the parenthesized expr is the left operand of the second '<<'
    // and 'std::endl' is the right operand.

    // the '::' is also an operator, called the scope operator
    // the result is that 'cout' is a name that is in the scope 'std'.

    return 0;
}
// curly braces form another scope