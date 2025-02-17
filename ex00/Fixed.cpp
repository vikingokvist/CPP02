#include "Fixed.hpp"

Fixed::Fixed() : fixedPointNumber(0) {}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed::~Fixed() {}


int		Fixed::getRawBits(void) const
{
	return (fixedPointNumber);
}

void		Fixed::setRawBits(int const raw)
{
	fixedPointNumber = raw;
}