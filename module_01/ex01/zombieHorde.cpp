#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    int i;

    i = -1;
    while (i++, i < N)
        horde[i].set_name(name);
    return (horde);
}