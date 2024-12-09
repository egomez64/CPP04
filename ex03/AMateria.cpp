#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &_type) : type(_type)
{
	std::cout << "AMateria constructor called" << std::endl;
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

void AMateria::use(ICharacter &target)
{
	(void)target;
}
