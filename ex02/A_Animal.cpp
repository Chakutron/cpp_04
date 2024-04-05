#include "A_Animal.hpp"

A_Animal::A_Animal(void)
{
	std::cout << YELLOW << "(A_Animal) Default constructor called" << NC << std::endl;
	this->_type = "A_Animal";
}

A_Animal::~A_Animal(void)
{
	std::cout << YELLOW << "(A_Animal) Destructor called" << NC << std::endl;
}

A_Animal::A_Animal(A_Animal const &other)
{
	std::cout << YELLOW << "(A_Animal) Copy constructor called" << NC << std::endl;
	*this = other;
}

A_Animal &A_Animal::operator=(A_Animal const &other)
{
	std::cout << YELLOW << "(A_Animal) Copy assignment operator called" << NC << std::endl;
	this->_type = other.getType();
	return (*this);
}

void	A_Animal::makeSound(void) const
{
	std::cout << BLUE << "The " << this->_type << " makes an strange sound.." << NC << std::endl;
}

std::string	A_Animal::getType(void) const
{
	return (this->_type);
}