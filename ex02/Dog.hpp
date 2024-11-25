#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);

	public:
		void makeSound() const;
		std::string getIdea(int i);
		void setIdea(std::string _idea, int i);

	private:
		Brain *_brain;
};

#endif