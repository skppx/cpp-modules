#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Only 3 parameters (in this order) : ./Sed <filename> <string1> <string2>" << std::endl;
		return (0);
	}
	else
	{
		Sed	sed(argv[1]);
		sed.replace(argv[2], argv[3]);
	}
	return (0);
}
		
