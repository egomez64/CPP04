#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &_type)
{
	int y = 0;
	std::cout << "AMateria constructor called" << std::endl;
	this->type = _type;
	for (std::string::iterator i = this->type.begin(); i != this->type.end(); i++)
		this->type[y] = tolower(*i);
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria &AMateria::operator=(const AMateria &src)
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

const std::string &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target) {}
