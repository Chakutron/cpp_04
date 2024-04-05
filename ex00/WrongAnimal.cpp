#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << YELLOW << "(WrongAnimal) Default constructor called" << NC << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << YELLOW << "(WrongAnimal) Destructor called" << NC << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << YELLOW << "(WrongAnimal) Copy constructor called" << NC << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	std::cout << YELLOW << "(WrongAnimal) Copy assignment operator called" << NC << std::endl;
	this->_type = other.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << BLUE << "The " << this->_type << " makes an strange sound.." << NC << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}