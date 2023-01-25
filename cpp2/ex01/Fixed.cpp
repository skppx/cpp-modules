#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _nbFixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nbFixedPoint = n << this->_nbFracBits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nbFixedPoint = roundf(n * (1 << this->_nbFracBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
} 

Fixed::Fixed(const Fixed& copy)
{
	std::cout << " Copy constructor called" << std::endl;
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

int		Fixed::toInt(void) const
{
	return (this->_nbFixedPoint >> this->_nbFracBits);
}

float	Fixed::toFloat() const
{
	return ((float)this->_nbFixedPoint / (float)(1 << this->_nbFracBits));
}

std::ostream &operator<<(std::ostream &o, const Fixed& c)
{
	o << c.toFloat();
	return o;
}
