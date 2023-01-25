#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;

	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();
		Dog &operator=(const Dog& copy);

		void	makeSound(void)const;
};

#endif
