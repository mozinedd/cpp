#include "Fixed.hpp"

Fixed::Fixed() : raw_bits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : raw_bits(other.raw_bits)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
   raw_bits  =  number  << fractional;  // kan7awlo int fixed point o kaytstora fi rawbits
}

Fixed::Fixed(const float number)
{
    raw_bits = roundf(number * ( 1 << fractional));  // number * 256     nafss lkhadma dyal li 9bal ghir hadi m3a number float
}

int Fixed::toInt( void ) const
{
    return (raw_bits >> fractional); //   raw_bits/256
}

float Fixed::toFloat( void ) const
{
    return (float(raw_bits) / (1 << fractional));   // kanchiftiw 1 bach ywali 256 o kan9assmo 3lih __ float 3la hssab return type
}

std::ostream &operator<<(std::ostream &output , const Fixed &fixed)
{
    output << fixed.toFloat();
    return output;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        raw_bits = other.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (raw_bits);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    raw_bits = raw;
}