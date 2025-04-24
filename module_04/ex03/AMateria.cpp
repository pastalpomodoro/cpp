#include"main.hpp"

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}
AMateria::AMateria(void)
{
    ;
}
AMateria::~AMateria(void)
{
    ;
}
std::string const &AMateria::getType(void) const
{
    return(this->_type);
}