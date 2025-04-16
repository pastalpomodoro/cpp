#include "Fixed.hpp"

const int Fixed::_f = 8;

Fixed::Fixed(void): _n(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}
Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_n = copy.getRawBits();
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
        _n = other.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
    this->_n = raw;
}
