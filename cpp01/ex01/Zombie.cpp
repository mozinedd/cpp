#include "Zombie.hpp"


Zombie::Zombie() : name("default")
{    
}

Zombie::Zombie(std::string n) : name(n)
{
}
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
    std::cout << this->name << ": Destructor RUN" << std::endl;
}
void Zombie::setname(std::string name)
{
    this->name = name;
}
