#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string _type);
		virtual ~Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);

	public:
		void setType(std::string);
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif
