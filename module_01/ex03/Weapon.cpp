#include "Weapon.hpp"

Weapon::Weapon(void)
{
    ;
}
Weapon::Weapon(std::string str)
{
    _type = str;
}

Weapon::~Weapon(void)
{
    ;
}

void Weapon::setType(std::string str)
{
    _type = str;
}

std::string Weapon::getType(void)
{
    return (_type);
}