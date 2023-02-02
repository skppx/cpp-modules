#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	const WrongAnimal* meeta = new WrongAnimal();
	const WrongAnimal* ii = new WrongCat();
	const WrongCat*	jj= new WrongCat();

	std::cout << ii->getType() << " " << std::endl;
	std::cout << jj->getType() << " " << std::endl;
	ii->makeSound(); //will output the WrongAnimal sound!
	jj->makeSound(); //will output the WrongCat sound!
	meeta->makeSound();

	delete i;
	delete j;
	delete meta;
	delete ii;
	delete jj;
	delete meeta;

	return 0;
}
