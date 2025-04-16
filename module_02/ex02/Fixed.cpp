#include "Fixed.hpp"

const int Fixed::_f = 8;

Fixed::Fixed(void): _n(0)
{
    // std::cout << "Default constructor called" << std::endl;
    return ;
}
Fixed::Fixed(const Fixed& copy)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int n)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_n = n << this->_f;
}
Fixed::Fixed(const float n)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_n = roundf(n * (1 << this->_f));
}
Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
    return;
}
Fixed &Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_n = other._n;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called\n";
    return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called\n";
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

bool    operator==(Fixed const &a, Fixed const &b)
{
    a.toFloat() == b.toFloat();
    return (a.toFloat() == b.toFloat());
}

bool    operator>(Fixed const &a, Fixed const &b)
{
    a.toFloat() > b.toFloat();
    return (a.toFloat() > b.toFloat());
}

bool    operator<(Fixed const &a, Fixed const &b)
{
    a.toFloat() < b.toFloat();
    return (a.toFloat() < b.toFloat());
}

bool    operator>=(Fixed const &a, Fixed const &b)
{
    a.toFloat() >= b.toFloat();
    return (a.toFloat() >= b.toFloat());
}

bool    operator<=(Fixed const &a, Fixed const &b)
{
    a.toFloat() <= b.toFloat();
    return (a.toFloat() <= b.toFloat());
}

bool    operator!=(Fixed const &a, Fixed const &b)
{
    a.toFloat() != b.toFloat();
    return (a.toFloat() != b.toFloat());
}

Fixed   Fixed::operator+(Fixed const &b)
{
    return Fixed (this->toFloat() + b.toFloat());
}
Fixed   Fixed::operator-(Fixed const &b)
{
    return Fixed (this->toFloat() - b.toFloat());
}
Fixed   Fixed::operator*(Fixed const &b)
{
    return Fixed (this->toFloat() * b.toFloat());
}
Fixed   Fixed::operator/(Fixed const &b)
{
    return Fixed (this->toFloat() / b.toFloat());
}
Fixed   Fixed::operator++(void)
{
    this->setRawBits(++this->_n);
    return(*this);
}
Fixed   Fixed::operator++(int)
{
    Fixed tmp;
    tmp = *this;
    this->setRawBits(++this->_n);
    return (tmp);
}
Fixed   Fixed::min(Fixed &a, Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return(a);
    return(b);
}
Fixed   Fixed::max(Fixed &a, Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return(a);
    return(b);
}
Fixed   Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() < b.toFloat())
        return(a);
    return(b);
}
Fixed   Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() > b.toFloat())
        return(a);
    return(b);
}