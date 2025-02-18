#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		static const int fractionalBits;
		int		fixedPointValue;

	public:
		// CONSTRUCTORS
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		Fixed(const int fixedPointInt);
		Fixed(const float fixedPointFloat);

		// DESTRUCTOR
		~Fixed();

		// GETTER - SETTER
		void	setRawBits(int const raw);
		int		getRawBits(void) const;

		// OVERLOAD COMPARISON OPERATORS
		bool	operator>(const Fixed &other);
		bool	operator<(const Fixed &other);
		bool	operator>=(const Fixed &other);
		bool	operator<=(const Fixed &other);
		bool	operator==(const Fixed &other);
		bool	operator!=(const Fixed &other);

		// OVERLOAD ARITHMETIC OPERATORS
		float	operator+(const Fixed &other);
		float	operator-(const Fixed &other);
		float	operator*(const Fixed &other);
		float	operator/(const Fixed &other);

		// OVERLOAD PRE INCREMENT/DECREMENT OPERATORS
		Fixed		&operator++();
		Fixed		&operator--();

		// OVERLOAD POST INCREMENT/DECREMENT OPERATORS
		Fixed		&operator++(int);
		Fixed		&operator--(int);

		// PUBLIC METHODS COMPARISONS
		static Fixed		&min(Fixed &first, Fixed &second);
		static Fixed 		&max(Fixed &first, Fixed &second);

		// PUBLIC METHODS CONSTANT COMPARISONS 
		static const Fixed	&min(Fixed const &first, Fixed const &second);
		static const Fixed 	&max(Fixed const &first, Fixed const &second);

		// PUBLIC METHODS CONVERSIONS
		float	toFloat(void) const;
		int		toInt(void) const;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif