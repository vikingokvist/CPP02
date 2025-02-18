#include "Fixed.hpp"

const int	Fixed::fractionalBits = 8;

Fixed::Fixed()
{
	this->fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->fixedPointValue = copy.getRawBits();
	return *this;
}

Fixed::Fixed(const int fixedPointIntNumber)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointValue = fixedPointIntNumber << this->fractionalBits;
}

Fixed::Fixed(const float fixedPointFloat)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = roundf(fixedPointFloat * (1 << this->fractionalBits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixedPointValue / (float)(1 << this->fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (this->fixedPointValue >> this->fractionalBits);
}

int		Fixed::getRawBits(void) const
{
	return (this->fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}