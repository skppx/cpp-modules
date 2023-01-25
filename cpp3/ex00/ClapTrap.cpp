#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("noName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Constructor called for :" << _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called for :" << _name << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "Claptrap " << _name << " is out of energy points" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage." << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
	{
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage." << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= amount)
	{
		std::cout << "Claptrap " << _name << " is out energy." << std::endl;
		return;
	}
	std::cout << "Claptrap " << _name << " repairs itself for " << amount << " hit points." << std::endl;
	_energyPoints -= 1;
	_hitPoints += amount;
}
