#include "Harl.hpp"

int main(void)
{
	std::string input;
	Harl		harl;

	do
	{
		std::cout << "Enter a level: " << std::flush;
		std::getline (std::cin, input);
		harl.complain(input);
	}while (std::cin.good());

	return 0;
}
