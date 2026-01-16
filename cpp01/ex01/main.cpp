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


// int main()
// {
//     Zombie *c = zombieHorde(-2, "hello");
//     if (!c)
//     {
//         std::cout << "Errooor\n";
//         return (1);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         c[i].announce();
//     }
//     delete[] c;
// }