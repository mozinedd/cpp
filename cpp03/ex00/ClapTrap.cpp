#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hit_point(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const std::string& x) : name(x), hit_point(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap name parametre constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) 
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    this->name = other.name;
    this->hit_point = other.hit_point;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hit_point = other.hit_point;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage; 
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_point > 0 && energy_points > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
        energy_points--;
    }
    else
        std::cout << "can't attack " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((int)amount > hit_point)
        hit_point = 0;
    else
        hit_point -= amount;
    std::cout << "ClapTrap " << name << " take dammage of " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_point > 0 && energy_points > 0)
    {
        hit_point += amount;
        energy_points--;
        std::cout << "ClapTrap " << name << " repaired by " << amount << " points!" << std::endl;
    }
    else
        std::cout << "can't repaired " << std::endl;
}