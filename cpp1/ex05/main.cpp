#include "Harl.hpp"

int main(void)
{
	std::string input;
	Harl		harl;

	do
	{
		std::cout << "Enter a level: ";
		std::cin >> input;
		harl.complain(input);
	}while (1);

	return 0;
}
