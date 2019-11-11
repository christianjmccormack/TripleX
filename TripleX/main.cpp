#include <iostream>

int main()
{
	std::cout << "You are a secret agent breaking into a secure server room...";
	std::cout << std::endl;
	std::cout << "Enter the correct code to continue...";

	const int a = 4;
	const int b = 6;
	const int c = 2;

	const int sum = a + b + c;
	const int product = a * b * c;



	std::cout << std::endl;
	std::cout << "The sum of the three numbers is " << sum << "." << std::endl;
	std::cout << "The product of the three numbers is " << product << "." << std::endl;

	return 0;
}

