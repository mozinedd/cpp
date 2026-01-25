#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
    
    std::cout << "Animal Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Animal::Animal(const std::string& t) : type(t)
{
    std::cout << "Animal parametrized constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

const std::string& Animal::getType() const
{
    return (type);
}

