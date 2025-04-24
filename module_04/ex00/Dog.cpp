#include"global.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog default constructor\n";
}
Dog::Dog(std::string t) : Animal(t)
{
    std::cout << "Dog type constructor\n";
}
Dog::~Dog(void)
{
    std::cout << "Dog destructor\n";
}

void Dog::makeSound(void) const
{
    std::cout << " Wouf Wouf wOUF fdp!!!!\n";
}