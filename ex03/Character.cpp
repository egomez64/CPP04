#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
	this->name = "none";
}

Character::Character(const std::string _name)
{
	std::cout << "Character default constructor called" << std::endl;
	this->name = _name;
}

Character::Character(const Character &src)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

Character &Character::operator=(const Character &src)
{
	if (this != &src)
	{
		this->name = src.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
			this->inventory[i] = src.inventory[i] != NULL ? src.inventory[i]->clone() : NULL;
		}	
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
}

const std::string &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
			this->inventory[i] = m;
	}
	return ;
}
