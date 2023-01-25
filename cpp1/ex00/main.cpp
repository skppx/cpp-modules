#include "Zombie.hpp"

int main(void)
{
	Zombie zombie_stack("stack");
	zombie_stack.announce();
	Zombie *zombie_heap = zombie_stack.newZombie("heap");
	zombie_heap->announce();
	zombie_stack.randomChump("chump");
	delete zombie_heap;
	return 0;
}
