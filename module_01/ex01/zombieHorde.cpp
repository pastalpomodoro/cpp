#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    Zombie *horde;

    horde = new Zombie[n];
    while (n >= 0)
    {
        horde[n - 1].set_name(name);
        n--;
    }
    return (horde);
}