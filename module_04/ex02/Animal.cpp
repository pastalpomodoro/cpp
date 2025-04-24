#include"global.hpp"

Animal::Animal(void)
{
    std::cout << "Animal default constructor\n";
}
Animal::Animal(std::string t)
{
    std::cout << "Animal type constructor\n";
    this->type = t;
}
Animal::~Animal(void)
{
    std::cout << "Animal destructor\n";
}
void    Animal::makeSound(void) const
{
    std::cout << "Animal noise\n";
}
std::string    Animal::getType(void) const
{
    return (this->type);
}