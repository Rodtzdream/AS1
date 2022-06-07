#include <iostream>

int main()
{
	double a, b, c, d;
	std::cout << "Enter a: ";
	std::cin >> a;
	std::cout << "Enter b: ";
	std::cin >> b;
	std::cout << "Enter c: ";
	std::cin >> c;
	d = b * b - 4 * a * c;
	std::cout << "Discriminant = " << d << std::endl;
	if (d > 0)
		std::cout << "There are two roots of the equation!" << std::endl;
	else if (d == 0)
		std::cout << "There is one root of the equation!" << std::endl;
	else
		std::cout << "There are no roots of the equation!" << std::endl;

	return 0;
}