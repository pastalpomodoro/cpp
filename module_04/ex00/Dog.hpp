#ifndef DOG_HPP
#define DOG_HPP

#include"global.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(std::string t);
        ~Dog(void);
};
#endif