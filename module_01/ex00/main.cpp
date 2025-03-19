#include "Zombie.hpp"

int main()
{
    Zombie *tom = newZombie("1");
    tom->annouce();
    randomChump("2");
    delete tom;
}
