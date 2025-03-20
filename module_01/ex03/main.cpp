#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
    {
        Weapon club = Weapon("sodomisateur");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("destructeur");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("suceur");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}