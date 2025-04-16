#include"FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "Default FragTrap constructor called\n";
}
FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout << "Name FragTrap constructor called\n";
}
FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Hight Five!!!\n";
}