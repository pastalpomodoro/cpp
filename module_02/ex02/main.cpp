#include "Fixed.hpp"

int main( void ) 
{
    Fixed a(12.3f);
    Fixed b(12.3f);

    if (a == b)
        std::cout << "Ciao bello\n";
    return 0;
}