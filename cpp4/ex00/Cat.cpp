#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void	Cat::makeSound(void)const
{
	std::cout << "Miaou" << std::endl;
}
