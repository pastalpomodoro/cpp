#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<string>
#include<cstdlib>
#include<iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void annouce(void);
        void set_name(std::string name);
}           ;

Zombie* zombieHorde(int N, std::string name);

#endif