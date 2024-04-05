#pragma once

#include <string>
#include <iostream>

#define RED "\e[31m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define BLUE "\e[34m"
#define NC "\e[0m"

class Animal
{
	public:
		// *** Orthodox Canonical Form ***
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		// *******************************
		virtual void makeSound() const;
		std::string getType() const;
	protected:
		std::string _type;
};