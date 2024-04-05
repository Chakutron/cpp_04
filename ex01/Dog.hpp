#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		// *** Orthodox Canonical Form ***
		Dog();
		~Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		// *******************************
		virtual void makeSound() const;
	private:
		Brain*	_brain;
};