#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
private:
    int raw_bits;
    static const int fractional = 8;
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed(const int number);
    Fixed(const float number);

    Fixed& operator=(const Fixed& other);

    ~Fixed();

    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );

    bool operator>(const Fixed& other)const;
    bool operator<(const Fixed& other)const;
    bool operator>=(const Fixed& other)const;
    bool operator<=(const Fixed& other)const;
    bool operator==(const Fixed& other)const;
    bool operator!=(const Fixed& other)const;

    Fixed operator+(const Fixed& other)const;
    Fixed operator-(const Fixed& other)const;
    Fixed operator*(const Fixed& other)const;
    Fixed operator/(const Fixed& other)const;

    Fixed& operator++(void);
    Fixed operator++(int);
    
    Fixed& operator--(void);
    Fixed operator--(int);

    static Fixed& min(Fixed& f1, Fixed& f2);
    static Fixed& max(Fixed& f1, Fixed& f2);
    static const Fixed& min(const Fixed& f1, const Fixed& f2);
    static const Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream &operator<<(std::ostream &output , const Fixed &fixed);

#endif