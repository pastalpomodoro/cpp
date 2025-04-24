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

        bool    operator==(Fixed const &b);
        bool    operator>(Fixed const &b);
        bool    operator<(Fixed const &b);
        bool    operator>=(Fixed const &b);
        bool    operator<=(Fixed const &b);
        bool    operator!=(Fixed const &b);

        Fixed   operator+(Fixed const &b);
        Fixed   operator-(Fixed const &b);
        Fixed   operator*(Fixed const &b);
        Fixed   operator/(Fixed const &b);
        Fixed   operator++(void);
        Fixed   operator++(int);
        static Fixed   min(Fixed &a, Fixed &b);
        static Fixed   max(Fixed &a, Fixed &b);
        static Fixed   min(Fixed const &a, Fixed const &b);
        static Fixed   max(Fixed const &a, Fixed const &b);
    };
    
    std::ostream &operator<<(std::ostream &out, Fixed const &n);
    //ajouter toutes ces fonction au membre publique de la classe
#endif