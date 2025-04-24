#ifndef CURE_HPP
#define CURE_HPP

#include"main.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(std::string const &type);
        ~Ice(void);
};

#endif