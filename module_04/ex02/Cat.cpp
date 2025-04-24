#include"global.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat default constructor\n";
    this->_brain = new Brain();
}
Cat::Cat(std::string t):Animal(t)
{
    std::cout << "Cat type constructor\n";
    this->_brain = new Brain();
}
Cat::~Cat(void)
{
    std::cout << "Cat destructor\n";
    delete this->_brain;
}
void    Cat::makeSound(void) const
{
    std::cout << "miau miau conard!!!!!\n";
}