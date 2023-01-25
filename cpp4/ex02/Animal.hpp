#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal(const Animal& copy);
		virtual ~Animal();
		Animal &operator=(const Animal& copy);

		virtual void	makeSound(void)const = 0;
		std::string		getType(void)const;
	
	protected:
		Animal();
		std::string _type;
};

#endif
