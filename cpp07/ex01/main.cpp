#include "iter.hpp"
#include <iostream>
#include <string>

void print(const int &x)
{
    std::cout << x << std::endl;
}

int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    ::iter(tab, 5, print);
}