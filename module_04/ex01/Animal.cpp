#include"global.hpp"

Animal::Animal(void)
{
    ;
}
Animal::Animal(std::string t)
{
    this->type = t;
}
Animal::~Animal(void)
{
    ;
}
void    Animal::makeSound(void) const
{
    std::cout << "Animal noise\n";
}
std::string    Animal::getType(void) const
{
    return (this->type);
}