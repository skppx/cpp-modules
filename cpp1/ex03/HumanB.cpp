#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
}
