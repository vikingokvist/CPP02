#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int				fixedPointNumber;
		static const int fractionalBits;
	public:
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed();
		Fixed(const Fixed& other);
		Fixed &operator=(const Fixed &other)
		{
			if (this != &other)
				this->fixedPointNumber = other.fixedPointNumber;
			return (*this);
		}
		~Fixed();
};

#endif

