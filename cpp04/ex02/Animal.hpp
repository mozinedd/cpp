#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        Animal(const std::string& t);
        virtual ~Animal();
        const std::string& getType() const;
        virtual void makeSound() const = 0;
};

#endif