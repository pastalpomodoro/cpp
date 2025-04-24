#include"global.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat default constructor\n";
}
Cat::Cat(std::string t):Animal(t)
{
    std::cout << "Cat type constructor\n";
}
Cat::~Cat(void)
{
    std::cout << "Cat destructor\n";
}
void    Cat::makeSound(void) const
{
    std::cout << "miau miau conard!!!!!\n";
}