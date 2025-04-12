#ifndef FIXED_HPP
#define FIXED_HPP

#include<string>
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
};

#endif