#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<string>
#include<cstdlib>
#include<iostream>

class Weapon
{
    private:
        std::string _type; 
    public:
        Weapon(std::string str);
        Weapon(void);
        ~Weapon(void);
        std::string getType();
        void setType(std::string str);
};

#endif