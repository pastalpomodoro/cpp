#include"Harl.hpp"

Harl::Harl(void)
{
    ;
}
Harl::~Harl(void)
{
    ;
}

void Harl::debug(void)
{
    std::cout << "I debug!" << std::endl;
}
void Harl::info(void)
{
    std::cout << "I give info!" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "WARNING STOP PLS!" << std::endl;
}
void Harl::error(void)
{
    std::cout << "ERROR ERROR!" << std::endl;
}
void Harl::complain(std::string str)
{
    void (Harl::*ptrs[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;

    while (i++, i < 4)
    {
        if (tab[i] == str)
            (this->*ptrs[i])();
    }
}