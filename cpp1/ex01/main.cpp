#include "Zombie.hpp"

int main(void)
{
	Zombie* zombi = zombieHorde(3, "Patrick");
	zombi[0].announce();
	zombi[1].announce();
	zombi[2].announce();
	delete [] zombi;
	return 0;
}

