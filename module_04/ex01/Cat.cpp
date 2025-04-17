#include"global.hpp"

Cat::Cat(void) : Animal("Cat")
{
    ;
}
Cat::Cat(std::string t):Animal(t)
{
    ;
}
Cat::~Cat(void)
{
    ;
}
void    Cat::makeSound(void) const
{
    std::cout << "miau miau conard!!!!!\n";
}