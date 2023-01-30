#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	delete j;
	delete i;

	std::cout << "-------------------" << std::endl;

	Dog rex;
	{
		Dog cody = rex;
	}

	std::cout << "-------------------" << std::endl;

	Animal *tab[20];

    for (int i = 0; i < 20; i++)
	{
        if (i < 10)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }
    for (int i = 0; i < 20; i++)
		delete tab[i];
	
	Animal animal;

	return 0;
}
