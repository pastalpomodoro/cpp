#include "Fixed.hpp"

const int Fixed::_f = 8;

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}
Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_n = n << this->_f;
}
Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    this->_n = roundf(n * (1 << this->_f));
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
    return;
}
Fixed &Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_n = other._n;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    this->_n = raw;
}

float    Fixed::toFloat(void) const
{
    return ((float)this->_n / (1 << this->_f));
}

int        Fixed::toInt(void) const
{
    return (this->_n >> this->_f);
}

std::ostream &operator<<(std::ostream &out, Fixed const &n)
{
    out << n.toFloat();
    return (out);
}
