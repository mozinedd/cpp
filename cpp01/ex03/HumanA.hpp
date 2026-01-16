#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &w;
        std::string name;
    public:
        void attack();
        HumanA(std::string n, Weapon& w);
        
};

#endif