
#include"Span.hpp"
 
Span::Span()
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const unsigned int N) : _N(N)
{
	_tab.resize(N);
}

Span::Span(const Span &copy)
{
	std::cout  << "Span copy constructor called" << std::endl;
}
 
Span &Span::operator=(const Span &copy)
{
	std::cout << "Span assignation constructor called" << std::endl;
	if (this == &copy)
			return *this;
	this->_N = copy._N;
	this->_tab = copy._tab;
	return *this;
}
 
Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

void	Span::addNumber(int N)
{
	if (_tab.size() > _N)
		throw std::out_of_range("Storage is full");
	_tab.push_back(N);
}
