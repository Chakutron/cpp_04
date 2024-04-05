#pragma once

#include <string>
#include <iostream>

#define RED "\e[31m"
#define GREEN "\e[32m"
#define YELLOW "\e[33m"
#define BLUE "\e[34m"
#define NC "\e[0m"

class Brain
{
	public:
		// *** Orthodox Canonical Form ***
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		// *******************************
	protected:
		std::string	_ideas[100];
};
