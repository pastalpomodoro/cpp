#include"global.hpp"

Dog::Dog(void) : Animal("Dog")
{
    ;
}
Dog::Dog(std::string t) : Animal(t)
{
    ;
}
Dog::~Dog(void)
{
    ;
}

void Dog::makeSound(void) const
{
    std::cout << " Wouf Wouf fdp WPUF!!!!\n";
}