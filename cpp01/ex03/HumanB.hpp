#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *w;
        std::string name;
    public:
        void attack();
        HumanB(std::string n);
        void setWeapon(Weapon& set);
        
};

#endif