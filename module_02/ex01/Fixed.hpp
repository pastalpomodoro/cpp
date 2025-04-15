#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _n;
        const static int _f;
    public:
        Fixed();
        Fixed(const Fixed& copy);
        Fixed(const int n);
        Fixed(const float n);
        ~Fixed();

        Fixed &operator=(const Fixed &other);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int        toInt(void)const;
        float    toFloat(void)const;
    };
    
    std::ostream  &operator<<(std::ostream &out, Fixed const &n);

#endif