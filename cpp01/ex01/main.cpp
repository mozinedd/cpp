#include "Zombie.hpp"

int main()
{
    Zombie *c = zombieHorde(5, "hello");
    if (!c)
        return 0;
    for (int i = 0; i < 5; i++)
    {
        c[i].announce();
    }
    delete[] c;
}
