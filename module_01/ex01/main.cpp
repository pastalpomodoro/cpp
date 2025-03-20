#include "Zombie.hpp"

int main(void)
{
    Zombie *horde = zombieHorde(20, "z");
    delete[] horde;
}