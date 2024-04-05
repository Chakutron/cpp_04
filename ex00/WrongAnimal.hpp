#pragma once

#include <string>
#include <iostream>

#define RED "\e[31m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define BLUE "\e[34m"
#define NC "\e[0m"

class WrongAnimal
{
	public:
		// *** Orthodox Canonical Form ***
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		// *******************************
		void makeSound() const;
		std::string getType() const;
	protected :
		std::string _type;
};