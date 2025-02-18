#include "Fixed.hpp"

int		main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "Initial value of a:   " << a << " (float)" << std::endl;
	std::cout << "Initial value of b:   " << b << "      (int)" << std::endl;
	std::cout << "Initial value of c:   " << c << " (float)" << std::endl;
	std::cout << "Initial value of d:   " << d << "      (int)" << std::endl;

	std::cout << "---------------------------------------" << std::endl;

	std::cout << "Converted value of a: " << a.toInt() << "    (int)" << std::endl;
	std::cout << "Converted value of b: " << b.toInt() << "      (int)" << std::endl;
	std::cout << "Converted value of c: " << c.toInt() << "      (int)" << std::endl;
	std::cout << "Converted value of d: " << d.toInt() << "      (int)" << std::endl;

	std::cout << "---------------------------------------" << std::endl;

	std::cout << "Converted value of a: " << a.toFloat() << " (float)" << std::endl;
	std::cout << "Converted value of b: " << b.toFloat() << "      (float)" << std::endl;
	std::cout << "Converted value of c: " << c.toFloat() << " (float)" << std::endl;
	std::cout << "Converted value of d: " << d.toFloat() << "      (float)" << std::endl;

	std::cout << "---------------------------------------" << std::endl;

	return (0);
}