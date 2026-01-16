#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N <= 0)
        return NULL;
    Zombie *ptr = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        ptr[i].setname(name);
    }
    return (ptr);
}

// Zombie* zombieHorde( int N, std::string name )
// {
//     Zombie *ptr = new(std::nothrow) Zombie[N];
//     if (!ptr)
//         return (NULL);
//     for(int i = 0; i < N; i++)
//     {
//         ptr[i].setname(name);
//     }
//     return (ptr);
// }