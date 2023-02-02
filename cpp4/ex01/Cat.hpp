#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;

	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();
		Cat &operator=(const Cat& copy);

		std::string		getIdea(int index);
		void			setIdea(int index, std::string idea);
		void	makeSound(void)const;
};

#endif
