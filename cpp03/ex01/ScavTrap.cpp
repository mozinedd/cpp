#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    name = "scav";
    hit_point = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string& x) 
    : ClapTrap(x, 100, 50, 20)
{
    std::cout << "ScavTrap name parametre constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_point > 0 && energy_points > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
        energy_points--;
    }
    else
        std::cout << "ScavTrap can't attack " << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}