#include "iter.hpp"
#include <iostream>

int main(void)
{
	std::string array[] = {"oui", "non", "toto"};
	iter(array, 3, print<std::string>);

	return (0);
}
