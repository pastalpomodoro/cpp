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
void    Animal::makeSound(void)
{
    if (this->type == "Dog")
        std::cout << "wouf!! Wouf!! WOUF!!!\n";
    if (this->type == "Cat")
        std::cout << "miau miau miau maiu \n";
}