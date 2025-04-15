#include "Fixed.hpp"

int main(void)
{
    Fixed a(12.35f);
    Fixed const b( Fixed( 5.05f ) * Fixed( 3 ) - Fixed(6) );

    // if (a == b)
    //     printf("a == b\n");
    // if (a > b)
    //     printf("a > b\n");
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    b++;
    std::cout << b << std::endl;
}