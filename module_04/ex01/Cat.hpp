#ifndef CAT_HPP
#define CAT_HPP

#include"global.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(std::string t);
        ~Cat(void);
        void makeSound(void) const;
};
#endif