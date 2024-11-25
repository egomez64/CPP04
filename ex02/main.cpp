#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

	//init
	const Animal* tab[6];
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}

	//display
	for (int i = 0; i < 6; i++)
		std::cout << tab[i]->getType() << std::endl;
	for (int i = 0; i < 6; i++)
		tab[i]->makeSound();
	
	//free
	for (int i = 0; i < 6; i++)
		delete tab[i];

	//deep copy check
	Cat cat;
	cat.setIdea("Miaou", 0);
	Cat cat2 = cat;

	std::cout << cat2.getIdea(0) << std::endl;
	cat2.setIdea("Meow", 0);
	std::cout << cat.getIdea(0) << std::endl;
	std::cout << cat2.getIdea(0) << std::endl;
	return 0;
}