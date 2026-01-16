#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their " << w.getType() <<std::endl;
}

HumanA::HumanA(std::string n, Weapon& w) : w(w), name(n)
{
}