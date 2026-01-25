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
   raw_bits  =  number  << fractional;
}

Fixed::Fixed(const float number)
{
    raw_bits = roundf(number * ( 1 << fractional));
}

int Fixed::toInt( void ) const
{
    return (raw_bits >> fractional);
}

float Fixed::toFloat( void ) const 
{
    return (float(raw_bits) / (1 << fractional));
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

bool Fixed::operator>(const Fixed &other) const
{
    if (this->getRawBits() > other.getRawBits())
        return true;
    else
        return false;
}

bool Fixed::operator<(const Fixed& other) const
{
   if (this->getRawBits() < other.getRawBits())
       return (true);
   else
       return (false);
}

bool Fixed::operator>=(const Fixed& other) const
{
   if (this->getRawBits() >= other.getRawBits())
       return (true);
   else
       return (false);
}

bool Fixed::operator<=(const Fixed& other) const
{
   if (this->getRawBits() <= other.getRawBits())
       return (true);
   else
       return (false);
}

bool Fixed::operator==(const Fixed& other) const
{
   if (this->getRawBits() == other.getRawBits())
       return (true);
   else
       return (false);
}

bool Fixed::operator!=(const Fixed& other) const
{
   if (this->getRawBits() != other.getRawBits())
       return (true);
   else
       return (false);
}

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed ret(this->toFloat() + other.toFloat());
    return (ret);
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed ret(this->toFloat() - other.toFloat());
    return (ret);
}

Fixed Fixed::operator*(const Fixed& other) const
{
    Fixed ret(this->toFloat() * other.toFloat());
    return (ret);
}

Fixed Fixed::operator/(const Fixed& other) const
{
    Fixed ret(this->toFloat() / other.toFloat());
    return (ret);
}

Fixed& Fixed::operator++(void)
{
    raw_bits++;

    return *this;
}


Fixed Fixed::operator++(int)
{
    Fixed old(this->toFloat());
    raw_bits++;

    return old;
}

Fixed& Fixed::operator--(void)
{
    raw_bits--;

    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed old(this->toFloat());
    raw_bits--;

    return old;
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return (f2);
    else
        return (f1);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return (f1);
    else
        return (f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return (f2);
    else
        return (f1);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return (f1);
    else
        return (f2);
}
