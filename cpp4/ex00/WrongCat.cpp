#include "WrongCat.hpp"

WrongCat::WrongCat(): Animal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): Animal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this == &copy)
		return *this;
	this->_type = copy._type;
	return *this;
}

void	WrongCat::makeSound(void)const
{
	std::cout << "Miiiiiiiiiiiiii" << std::endl;
}
