#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &src): Animal(src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		this->type = src.type;
		this->_brain = new Brain();
		(*this->_brain) = (*src._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "Wouf Wouf" << std::endl;
}

std::string Dog::getIdea(int i)
{
	return this->_brain->ideas[i];
}

void Dog::setIdea(std::string _idea, int i)
{
	this->_brain->ideas[i] = _idea;
}
