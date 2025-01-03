#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& src): Animal(src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		this->type = src.type;
		this->_brain = new Brain();
		(*this->_brain) = (*src._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
} 

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou" << std::endl;
}

std::string Cat::getIdea(int i)
{
	return this->_brain->ideas[i];
}

void Cat::setIdea(std::string _idea, int i)
{
	this->_brain->ideas[i] = _idea;
}
