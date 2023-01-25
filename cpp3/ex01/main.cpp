#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap cp1;
	ScavTrap cp2("Alpha");

	cp1.attack("Sandbag");
	cp2.takeDamage(1);
	cp2.takeDamage(10);
	cp2.beRepaired(1);
	cp2.beRepaired(10);
	cp2.guardGate();
	for (int i = 0; i < 21; i++)
		cp1.attack("Sandbag");
	return (0);
}
