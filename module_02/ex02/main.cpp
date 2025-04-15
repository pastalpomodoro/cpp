#include "Fixed.hpp"

int main(void)
{
    Fixed a(12.35f);
    Fixed b(12.34f);

    if (a == b)
        printf("a == b\n");
    if (a > b)
        printf("a > b\n");
}