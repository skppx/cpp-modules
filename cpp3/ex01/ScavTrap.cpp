#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("noName"),  _hitPoints(100), _energyPoints(50), _attackDamage(20)i
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ScavTrap Constructor called for :" << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called for : " << _name << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is out of energy points" << std::endl;
		return;
	}
	
	else if (_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is dead" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage." << std::endl;
	_energyPoints -= 1;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
