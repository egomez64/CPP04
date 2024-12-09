#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	protected:
		AMateria *inventory[4];
		std::string name;
		AMateria *floor;

	public:
		Character();
		Character(const std::string _name);
		Character(const Character &src);
		Character &operator=(const Character &src);
		~Character();
	
	public:
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		AMateria *getFloor();
		void setFloor(AMateria *m);
};

#endif