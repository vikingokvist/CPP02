#include "Fixed.hpp"

const int	Fixed::fractionalBits = 8;

Fixed::Fixed() {
	this->fixedPointValue = 0;
}

Fixed::Fixed(const int fixedPointInt) {
	this->fixedPointValue = fixedPointInt << this->fractionalBits;
}

Fixed::Fixed(const float fixedPointFloat) {
	this->fixedPointValue = roundf(fixedPointFloat * (1 << this->fractionalBits));
}

Fixed::Fixed(const Fixed &other) {
	*this = other;
}

Fixed::~Fixed() {}

//-------------------------------------------------------------------------
//----------------------------------------------------------GETTER & SETTER

void	Fixed::setRawBits(int const raw) {
	this->fixedPointValue = raw;
}

int		Fixed::getRawBits(void) const {
	return (this->fixedPointValue);
}

//-------------------------------------------------------------------------
//--------------------------------------------OVERLOAD EQUALS OPERATORS

Fixed&	Fixed::operator=(const Fixed &other) {
	if (this != &other)
		this->fixedPointValue = other.getRawBits();
	return (*this);
}

//-------------------------------------------------------------------------
//--------------------------------------------OVERLOAD COMPARISON OPERATORS

bool	Fixed::operator>(const Fixed &other) const {
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator<(const Fixed &other) const {
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator>=(const Fixed &other) const {
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator<=(const Fixed &other) const {
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator==(const Fixed &other) const {
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=(const Fixed &other) const {
	return (this->toFloat() != other.toFloat());
}

//-------------------------------------------------------------------------
//--------------------------------------------OVERLOAD ARITHMETIC OPERATORS

float	Fixed::operator+(const Fixed &other) const {
	return (this->toFloat() + other.toFloat());
}

float	Fixed::operator-(const Fixed &other) const {
	return (this->toFloat() - other.toFloat());
}

float	Fixed::operator*(const Fixed &other) const {
	return (this->toFloat() * other.toFloat());
}

float	Fixed::operator/(const Fixed &other) const {
	return (this->toFloat() / other.toFloat());
}

//-------------------------------------------------------------------------
//--------------------------------OVERLOAD PRE/POS INCREMENT/DECREMENT OPERATORS

Fixed		Fixed::operator++() {
	this->fixedPointValue++;
	return (*this);
}

Fixed		Fixed::operator--() {
	this->fixedPointValue--;
	return (*this);
}

Fixed		Fixed::operator++(int) {
	Fixed	temp = *this;
	++this->fixedPointValue;
	return (temp);
}

Fixed		Fixed::operator--(int) {
	Fixed	temp = *this;
	--this->fixedPointValue;
	return (temp);
}

//-------------------------------------------------------------------------
//-----------------------------------------------------PUBLIC METHODS MIN/MAX

Fixed	&Fixed::min(Fixed &first, Fixed &second) {
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second) {
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}

const Fixed 	&Fixed::min(Fixed const &first, Fixed const &second) {
	if (first.getRawBits() < second.getRawBits())
		return (first);
	return (second);
}

const Fixed	&Fixed::max(Fixed const &first, Fixed const &second) {
	if (first.getRawBits() > second.getRawBits())
		return (first);
	return (second);
}

//-------------------------------------------------------------------------
//---------------------------------------------PUBLIC METHODS toFloat/toInt

float	Fixed::toFloat(void) const {
	return ((float)this->fixedPointValue / (float)(1 << this->fractionalBits));
}

int		Fixed::toInt(void) const {
	return (this->fixedPointValue >> this->fractionalBits);
}

//-------------------------------------------------------------------------
//----------------------------------------------------------PUBLIC FUNCTION

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed) {
	str << fixed.toFloat();
	return (str);
}