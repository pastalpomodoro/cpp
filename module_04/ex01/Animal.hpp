#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include"global.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(std::string t);
        ~Animal(void);
        virtual void    makeSound(void) const;
        std::string getType(void) const; 
};
#endif