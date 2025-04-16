#include"FragTrap.hpp"

FragTrap::FragTrap(void): _Hit(100), _Energy(100), _Attack(30)
{
    std::cout << "Default FragTrap constructor called\n";
}
FragTrap::FragTrap(std::string name): _Hit(100), _Energy(100), _Attack(30)
{
    std::cout << "Name FragTrap constructor called\n";
    this->_name = name;
}
FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Hight Five!!!\n";
}