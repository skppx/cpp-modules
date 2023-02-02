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
	rex.setIdea(0, "WAF");
	{
		Dog cody = rex;
		cody.setIdea(0, "Wouaf");
		std::cout << cody.getIdea(0) << std::endl;
		std::cout << rex.getIdea(0) << std::endl;
	}

	std::cout << "-------------------" << std::endl;


	Animal *tab[20];
    for (int i = 0; i < 10; i++)
	{
        if (i < 5)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }
    for (int i = 0; i < 10; i++)
		delete tab[i];
	
	return 0;
}
