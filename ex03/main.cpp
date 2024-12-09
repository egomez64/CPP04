#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	// {
	// 	IMateriaSource* src = new MateriaSource();
	// 	src->learnMateria(new Ice());
	// 	src->learnMateria(new Cure());
	// 	src->learnMateria(new Ice());
	// 	ICharacter* me = new Character("me");
	// 	ICharacter* notMe = new Character("notme");
	// 	notMe->equip(src->createMateria("ice"));
	// 	notMe->equip(src->createMateria("cure"));
	// 	notMe->equip(src->createMateria("cure"));
	// 	*notMe = *me;
		
	// 	AMateria* tmp;
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("fireball");
	// 	me->equip(tmp);
	// 	Character bob("Bob");
	// 	me->use(0, bob);
	// 	me->use(1, bob);
	// 	delete me;
	// 	delete notMe;
	// 	delete src;
	// }
	// std::cout << std::endl;
	{
		MateriaSource *src = new MateriaSource();
		Character globglob("Globglob");
		Character glabglab("Glabglab");
		AMateria *tmp;
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		tmp = src->createMateria("cure");
		globglob.equip(tmp);
		tmp = src->createMateria("cure");
		globglob.equip(tmp);
		tmp = src->createMateria("ice");
		globglob.equip(tmp);
		globglob.use(0, glabglab);
		globglob.use(2, glabglab);
		tmp = src->createMateria("cure");
		glabglab.equip(tmp);
		globglob.unequip(0);
		glabglab.equip(tmp);
		glabglab.use(0, globglob);
		globglob.use(0, glabglab);
		globglob.use(3, glabglab);
		globglob.use(120, glabglab);
		delete src;
	}
	return (0);
}
