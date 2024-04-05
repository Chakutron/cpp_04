#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << YELLOW << "(Animal) Default constructor called" << NC << std::endl;
	this->_type = "Animal";
}

Animal::~Animal(void)
{
	std::cout << YELLOW << "(Animal) Destructor called" << NC << std::endl;
}

Animal::Animal(Animal const &other)
{
	std::cout << YELLOW << "(Animal) Copy constructor called" << NC << std::endl;
	*this = other;
}

Animal &Animal::operator=(Animal const &other)
{
	std::cout << YELLOW << "(Animal) Copy assignment operator called" << NC << std::endl;
	this->_type = other.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << BLUE << "The " << this->_type << " makes an strange sound.." << NC << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}