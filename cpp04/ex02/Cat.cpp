#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    type = "Cat";
    b = new Brain(); 
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    b = new Brain(*other.b);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete b;
        b = new Brain(*other.b);
    }
    return (*this);
}

Cat::Cat(const std::string& t) : Animal(t)
{
    std::cout << "Cat parametrized constructor called" << std::endl;
    b = new Brain();
}

Cat::~Cat()
{
    delete b;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat mew mew" << std::endl;
}
