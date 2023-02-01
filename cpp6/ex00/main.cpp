#include <iostream>
#include <iomanip>
#include <climits>
#include <stdlib.h>

void	toChar(double val)
{
	if (val != val || !isascii(val))
		std::cout << "Impossible" << std::endl;
	else
	{
		char ret = static_cast<char>(val);
		if (isprint(ret))
			std::cout << "'" << ret << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
}

void	toInt(double val)
{
	int ret = static_cast<int>(val);
	if (val != val || (val > INT_MAX || val < INT_MIN))
		std::cout << "Impossible" << std::endl;
	else
		std::cout << ret << std::endl;
}

void	toFloat(double val)
{
	float ret = static_cast<float>(val);
	std::cout << ret << "f" << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./Convert <literal> " << std::endl;
		return (0);
	}
	double val = atof(av[1]);

	std::cout << std::setprecision(1);
	std::cout << std::fixed;

	std::cout << "char: ";
	toChar(val);
	
	std::cout << "int: ";
	toInt(val);
	
	std::cout << "float: ";
	toFloat(val);
	
	std::cout << "double: " << val << std::endl;
	return (0);
}
