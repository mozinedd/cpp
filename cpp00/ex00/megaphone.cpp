#include <iostream>
#include <string>

int main (int ac, char **av)
{
    if (ac <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (1);
    }
    for (int i=1; i<ac; i++)
    {
        std::string word = av[i];
        for(size_t j=0; j<word.length(); j++)
        {
            std::cout << (char)std::toupper(word[j]);
        }
    }
    std::cout << "\n";
    return (0);
}