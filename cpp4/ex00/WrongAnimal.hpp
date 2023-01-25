#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal& copy);

		void			makeSound(void)const;
		std::string		getType(void)const;
	
	protected:
		std::string _type;
};
