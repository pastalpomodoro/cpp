#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weap(weapon)
{
    ;
}

HumanA::~HumanA(void)
{
    ;
}

void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weap.getType() << std::endl;
}