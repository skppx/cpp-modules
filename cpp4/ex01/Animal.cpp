#include "Animal.hpp"

Animal::Animal(): _type("animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void Animal::makeSound(void)const
{
	std::cout << "..." << std::endl;
}

std::string Animal::getType(void)const
{
	return (this->_type);
}
