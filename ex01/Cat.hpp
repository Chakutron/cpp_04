#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		// *** Orthodox Canonical Form ***
		Cat();
		~Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		// *******************************
		virtual void makeSound() const;
	private:
		Brain*	_brain;
};