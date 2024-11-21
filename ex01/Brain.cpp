#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->ideas[i] != src.ideas[i])
			this->ideas[i] = src.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
