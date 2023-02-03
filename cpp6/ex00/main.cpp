#include <iostream>
#include <iomanip>
#include <climits>
#include <stdlib.h>
#include <string.h>

void	toChar(char *str, double val)
{
	if (strlen(str) == 1 && isalpha(str[0]))
		std::cout << "'" << str[0] << "'" << std::endl;		
	else if (val != val || !isascii(val))
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

void	toInt(double val, char *str)
{
	if (strlen(str) == 1 && isalpha(str[0]))
		std::cout << "'" << static_cast<int>(str[0]) << "'" << std::endl;
	else if (val != val || (val > INT_MAX || val < INT_MIN))
		std::cout << "Impossible" << std::endl;
	else
	{
		int ret = static_cast<int>(val);
		std::cout << ret << std::endl;
	}
}

void	toFloat(double val, char *str)
{
	if (strlen(str) == 1 && isalpha(str[0]))
		std::cout << "'" << static_cast<float>(str[0]) << "f'" << std::endl;
	else
	{
		float ret = static_cast<float>(val);
		std::cout << ret << "f" << std::endl;
	}
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
	toChar(av[1], val);
	
	std::cout << "int: ";
	toInt(val, av[1]);
	
	std::cout << "float: ";
	toFloat(val, av[1]);
	if (strlen(av[1]) == 1 && isalpha(av[1][0]))
		std::cout << "double: '" << static_cast<double>(av[1][0]) << "'" << std::endl;
	else
		std::cout << "double: " << val << std::endl;
	return (0);
}
