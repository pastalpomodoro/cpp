#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include"main.hpp"

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(std::string const & type);
        AMateria(void);
        ~AMateria(void);
        std::string const & getType() const; //Returns the materia type
        // virtual AMateria* clone() const = 0;
        // virtual void use(ICharacter& target);
};
#endif