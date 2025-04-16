#include"ClapTrap.hpp"

ClapTrap::ClapTrap(void): _Hit(100), _Energy(50), _Attack(20)
{
    std::cout << "Default contructor called\n";
}
ClapTrap::ClapTrap(std::string name): _Hit(100), _Energy(50), _Attack(20)
{
    std::cout << "Name contructor called\n";
    this->_name = name;
}
ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called\n";
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_Energy > 0 && this->_Hit > 0)
    {
        std::cout << "ClapTrap " << this->_name << " Attaks " << target << ", causing " << this->_Attack << " points of damage!\n";
        this->_Energy--;
    }
}
void    ClapTrap::takeDamage(unsigned int amout)
{
    if (this->_Hit > 0 && this->_Energy > 0)
    {
        std::cout << "ClapTrap " << this->_name << " is taking " << amout << " damage\n" ;
        this->_Hit-=amout;
    }
}
void    ClapTrap::beRepaired(unsigned int amout)
{
    if (this->_Hit > 0 && this->_Energy > 0)
    {
        std::cout << "ClapTrap " << this->_name << " is repairing for " << amout << std::endl;
        this->_Energy--;
        this->_Hit+=amout;
    }
}