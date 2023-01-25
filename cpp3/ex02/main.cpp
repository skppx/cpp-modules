#include "FragTrap.hpp"

int main(void)
{
	FragTrap cp1;
	FragTrap cp2("Alpha");

	cp1.attack("Sandbag");
	cp2.takeDamage(1);
	cp2.takeDamage(10);
	cp2.beRepaired(1);
	cp2.beRepaired(10);
	cp2.highFivesGuys();
	for (int i = 0; i < 11; i++)
		cp1.attack("Sandbag");
	return (0);
}
