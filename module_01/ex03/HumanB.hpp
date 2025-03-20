#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"Weapon.hpp"
#include<string>
#include<cstdlib>
#include<iostream>

class HumanB
{
    private:
        std::string _name;
        Weapon *_weap;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void setWeapon(Weapon &weapon);
        void attack();
};

#endif