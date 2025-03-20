#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"Weapon.hpp"
#include<string>
#include<cstdlib>
#include<iostream>

class HumanA
{
    private:
        std::string _name;
        Weapon &_weap;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void attack();
};

#endif