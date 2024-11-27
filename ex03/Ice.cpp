#include "Ice.hpp"

Ice::Ice() : AMateria::AMateria()
{
	std::cout << "Ice default constructor called" << std::endl;
	this->type = "ice";
}

Ice::Ice(const Ice &src) : AMateria::AMateria(src)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

Ice &Ice::operator=(const Ice &src)
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
	AMateria *copy = new Ice();
	return copy;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}