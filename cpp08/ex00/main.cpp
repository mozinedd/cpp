#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    for (int i = 0; i < 10; i++)
        vec.push_back(i);

    try
    {
        std::vector<int>::iterator it = easyfind(vec, 6);
        std::cout << "index is: " << *it << std::endl;

        it = easyfind(vec, 17);
        std::cout << "index is: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }



    std::list<int> l;
    for (int i = 0; i < 8; i++)
        l.push_back(i);

    try
    {
        std::list<int>::iterator it = easyfind(l, 4);
        std::cout << "index is: " << *it << std::endl;

        it = easyfind(l, 10);
        std::cout << "index is: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}