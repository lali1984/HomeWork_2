#include <iostream>
#include "calculate_x.h"

int main()
{
	double a, b;

	std::cout << "Enter two numbers to solve the equation 'ax + b = 0':\n";

	std::cout << "Enter number 'a': ";
	std::cin >> a;

	std::cout << "Enter number 'b': ";
	std::cin >> b;

	std::cout << "Number 'x' is: " << CalculateX(a, b) << '\n';
}