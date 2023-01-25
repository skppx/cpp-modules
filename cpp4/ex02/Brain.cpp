#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain& Brain::operator=(const Brain& copy)
{
	if (this == &copy)
		return *this;
	for (int i = 0; i < 100; i++)
	{
			this->_ideas[i] = copy._ideas[i];
	}
	return *this;
}
