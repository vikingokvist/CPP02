#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		static const int 	fractionalBits;
		int					fixedPointValue;

	public:
		Fixed();
		Fixed(const int fixedPointInt);
		Fixed(const float fixedPointFloat);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);

		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif

