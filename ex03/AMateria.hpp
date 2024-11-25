#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria();
		AMateria(std::string const &_type);
		AMateria(const AMateria &src);
		AMateria &operator=(const AMateria &src);
		~AMateria();

	public:
		const std::string &getType() const;
		virtual AMateria *clone() const=0;
		virtual void use(ICharacter &target);
};

#endif