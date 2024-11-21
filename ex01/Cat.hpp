#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);

	public:
		void makeSound() const;
		std::string getIdea(int i);
		void setIdea(std::string _idea, int i);

	private:
		Brain *_brain;
};

#endif