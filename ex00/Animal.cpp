#include "Animal.hpp"

Animal::Animal(): type()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string _type): type(_type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "This animal has no type, he can't do any sounds" << std::endl;
}

void Animal::setType(std::string _type)
{
	this->type =_type;
}

std::string Animal::getType() const
{
	return (this->type);
}
