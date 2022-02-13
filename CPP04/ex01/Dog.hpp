#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog& dog);
		Dog& operator=(const Dog &dog);
		void makeSound() const;
		Brain& getBrain(void);
		void setBrain(int i, std::string idea);
		void showBrain() const;
};

#endif