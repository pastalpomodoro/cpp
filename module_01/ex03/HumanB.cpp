#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
}
HumanB::~HumanB(void)
{
    ;
}

void HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weap->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weap = &weapon;
}