#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *stock[4];

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		MateriaSource &operator=(MateriaSource const &src);
		~MateriaSource();

	public:
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
};

#endif