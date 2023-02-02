#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	delete (this->_brain);
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog assignation constructor called" << std::endl;
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
	return *this;
}

void	Dog::makeSound(void)const
{
	std::cout << "Ouaf" << std::endl;
}

std::string	Dog::getIdea(int index)
{
	return _brain->_ideas[index];
}

void		Dog::setIdea(int index, std::string idea)
{
	_brain->_ideas[index] = idea;
}
