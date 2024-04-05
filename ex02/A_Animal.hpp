#pragma once

#include <string>
#include <iostream>

#define RED "\e[31m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define BLUE "\e[34m"
#define NC "\e[0m"

class A_Animal
{
	public:
		// *** Orthodox Canonical Form ***
		A_Animal();
		virtual ~A_Animal();
		A_Animal(const A_Animal &other);
		A_Animal &operator=(const A_Animal &other);
		// *******************************
		virtual void makeSound() const = 0;
		std::string getType() const;
	protected:
		std::string _type;
};