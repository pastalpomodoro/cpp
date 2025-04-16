#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _Hit;
        unsigned int _Energy;
        unsigned int _Attack;
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif