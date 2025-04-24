#include"global.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog default constructor\n";
    this->_brain = new Brain();
}
Dog::Dog(std::string t) : Animal(t)
{
    std::cout << "Dog type constructor\n";
    this->_brain = new Brain();
}
Dog::~Dog(void)
{
    std::cout << "Dog destructor\n";
    delete this->_brain;
}

void Dog::makeSound(void) const
{
    std::cout << " Wouf Wouf wOUF fdp!!!!\n";
}