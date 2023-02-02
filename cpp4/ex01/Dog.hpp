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

		std::string		getIdea(int index);
		void			setIdea(int index, std::string idea);
		void			makeSound(void)const;
};

#endif
