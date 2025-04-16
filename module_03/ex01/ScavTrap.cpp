#include"ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap default construcor called\n";
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap name constructor called\n";
}
ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::guardGate(void)
{
    std::cout << "Gate keep mode activate\n";
}