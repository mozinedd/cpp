#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    name = "frag";
    hit_point = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(const std::string& x) 
    : ClapTrap(x, 100, 100, 30)
{
    std::cout << "FragTrap name parametre constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (hit_point > 0 && energy_points > 0)
    {
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
        energy_points--;
    }
    else
        std::cout << "FragTrap can't attack " << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << " FragTrap request high-fives." << std::endl;
}