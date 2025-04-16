#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include"ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        std::string _name;
        unsigned int _Hit;
        unsigned int _Energy;
        unsigned int _Attack;
    public:
        FragTrap(void);
        FragTrap(std::string name);
        ~FragTrap(void);
        void highFivesGuys(void);
};

#endif