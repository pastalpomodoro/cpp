#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>

class Fixed
{
    private:
        int _n;
        const static int _f;
    public:
        Fixed();
        Fixed(const Fixed& copy);
        ~Fixed();
        Fixed &operator=(const Fixed &other);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif