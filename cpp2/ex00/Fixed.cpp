#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _nbFixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
} 

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignation operator called" << std::endl;
	if (this != &copy)
		this->_nbFixedPoint = copy.getRawBits();
	return *this;
}

void	Fixed::setRawBits(const int nbFixedPoint)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nbFixedPoint = nbFixedPoint;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_nbFixedPoint;
}
