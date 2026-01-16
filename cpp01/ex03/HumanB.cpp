#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << " attacks with their " << w->getType() <<std::endl;
}

HumanB::HumanB(std::string n) : name(n)
{
}

void HumanB::setWeapon(Weapon& set)
{
    w = &set;
}