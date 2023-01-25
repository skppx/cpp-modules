#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap cp1;
	ClapTrap cp2("Alpha");

	cp1.attack("Sandbag");
	cp2.takeDamage(1);
	cp2.takeDamage(10);
	cp2.beRepaired(1);
	cp2.beRepaired(10);
	for (int i = 0; i < 11; i++)
		cp1.attack("Sandbag");
	return (0);
}
