#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::Zombie()
{
    ;
}

Zombie::~Zombie(void)
{
    std::cout << _name << ": Destroyed" << std::endl;
}
void Zombie::annouce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

void Zombie::set_name(std::string name)
{
    _name = name;
}