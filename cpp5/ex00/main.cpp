#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat("Bob", 200);
		Bureaucrat("Bob", 0);
	}

	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
