#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : stock()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->stock[i] && this->stock[i] != NULL)
				delete this->stock[i];
			this->stock[i] = src.stock[i] != NULL ? src.stock[i]->clone() : NULL;
		}	
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] && this->stock[i] != NULL)
			delete this->stock[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] == NULL)
		{
			this->stock[i] = m;
			break ;
		}
	}
	return ;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] && this->stock[i]->getType() == type)
			return this->stock[i]->clone();
	}
	return 0;
}
