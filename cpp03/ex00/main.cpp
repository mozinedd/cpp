#include "ClapTrap.hpp"

int main()
{
    ClapTrap a = ClapTrap("x");
    a.attack("y");
    a.attack("y");
    a.beRepaired(1);
    a.attack("y");
}
