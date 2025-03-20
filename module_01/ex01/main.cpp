#include "Zombie.hpp"

int main(void)
{
    int i = 0;
    Zombie *horde = zombieHorde(10, "z");
    while (i < 10)
    {
        horde[i].annouce();
        i++;
    }
    delete horde;
}