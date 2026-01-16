#include "Zombie.hpp"

int main()
{
    Zombie y = Zombie("x");
    y.announce();

    randomChump("z1");

    Zombie *c = newZombie("z2");
    c->announce();
    delete c;
}