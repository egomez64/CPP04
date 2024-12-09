#include "Character.hpp"

Character::Character() : inventory(), name(), floor()
{
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string _name) : inventory(), name(_name), floor()
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
		if (!(this->inventory[i]->getType()).empty())
			delete this->inventory[i];
	}
	if (this->getFloor() != NULL)
		delete this->floor;
}

const std::string &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
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
	{
		this->setFloor(this->inventory[idx]);
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
	else
		std::cout << "* do nothing *" << std::endl;
}

void Character::setFloor(AMateria *m)
{
	if (this->getFloor() != NULL)
		delete this->floor;
	this->floor = m;
}

AMateria *Character::getFloor()
{
	return (this->floor);
}
