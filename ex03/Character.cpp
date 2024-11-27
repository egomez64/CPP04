#include "Character.hpp"

Character::Character() : inventory(), name() 
{
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string _name) : inventory(), name(_name)
{
	std::cout << "Character default constructor called" << std::endl;
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
		{
			this->inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->inventory[idx])
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}
