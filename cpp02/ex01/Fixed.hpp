#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
private:
    int raw_bits;
    static const int fractional;
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    
    Fixed(const int number);
    Fixed(const float number);

    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );

};

std::ostream &operator<<(std::ostream &output , const Fixed &fixed);

#endif