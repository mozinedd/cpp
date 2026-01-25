#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
    b = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    b = new Brain(*other.b);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete b;
        b = new Brain(*other.b);
    }
    return (*this);
}

Dog::Dog(const std::string& t) : Animal(t)
{
    std::cout << "Dog parametrized constructor called" << std::endl;
    b = new Brain();
}

Dog::~Dog()
{
    delete b;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog bark" << std::endl;
}
