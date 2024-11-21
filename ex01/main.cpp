#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{

	//init
	const Animal* deep_copy;
	const Animal* tab[6];
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}
	deep_copy = tab[0];

	//display
	for (int i = 0; i < 6; i++)
		std::cout << tab[i]->getType() << std::endl;
	for (int i = 0; i < 6; i++)
		tab[i]->makeSound();
	
	//free
	for (int i = 0; i < 6; i++)
		delete tab[i];
	return 0;
}