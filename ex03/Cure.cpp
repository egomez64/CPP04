#include "Cure.hpp"

Cure::Cure() : AMateria::AMateria()
{
	std::cout << "Cure default constructor called" << std::endl;
	this->type = "cure";
}

Cure::Cure(const Cure &src) : AMateria::AMateria(src)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
}

Cure &Cure::operator=(const Cure &src)
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	AMateria *copy = new Cure();
	return copy;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}