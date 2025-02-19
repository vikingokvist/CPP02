#include "Fixed.hpp"

int		main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;

	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;


	std::cout << Fixed::max(a, b) << std::endl;

	return (0);
}

// int		main(void)
// {
// 	Fixed a(5);
// 	Fixed b(3);


// 	std::cout << "------------------------------------------" << std::endl;
// 	std::cout << "a: " << a << ", b: " << b << std::endl;
// 	Fixed &result1 = Fixed::max(a, b);
// 	std::cout << "max(a, b) (modifiable): " << result1 << std::endl;
// 	result1 = Fixed(30);
// 	std::cout << "after fixed(30) on the max object: " << result1 << std::endl;

// 	std::cout << "------------------------------------------" << std::endl;
// 	std::cout << "a: " << a << ", b: " << b << std::endl;
// 	Fixed &result2 = Fixed::min(a, b);
// 	std::cout << "min(a, b) (modifiable): " << result2 << std::endl;
// 	result2 = Fixed(1);
// 	std::cout << "after fixed(2) on the min object: " << result2 << std::endl;

// 	Fixed const d(5);
// 	Fixed const c(3);
// 	std::cout << "-----------------------------------------" << std::endl;
// 	std::cout << "Const result: (non modifiable) " << Fixed::max(d, c) << std::endl;
// 	std::cout << "Const result: (non modifiable) " << Fixed::min(d, c) << std::endl;
// 	std::cout << "-----------------------------------------" << std::endl;

// 	a = 5;
// 	std::cout << "-----------------------------------------" << std::endl;
// 	std::cout << "Initial value: " << a << std::endl;
// 	std::cout << "PreIncrement Value: "<< ++a << std::endl;
// 	std::cout << "After value: " << a << std::endl;
// 	std::cout << "-----------------------------------------" << std::endl;

// 	a = 5;
// 	std::cout << "-----------------------------------------" << std::endl;
// 	std::cout << "Initial value: " << a << std::endl;
// 	std::cout << "PostIncrement Value: "<< a++ << std::endl;
// 	std::cout << "After value: " << a << std::endl;
// 	std::cout << "-----------------------------------------" << std::endl;


// 	return (0);
// }
