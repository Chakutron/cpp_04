#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << YELLOW << "(Dog) Default constructor called" << NC << std::endl;
	this->_type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << YELLOW << "(Dog) Destructor called" << NC << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << YELLOW << "(Dog) Copy constructor called" << NC << std::endl;
	*this = other;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << YELLOW << "(Dog) Copy assignment operator called" << NC << std::endl;
	this->_type = other.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << BLUE << "The " << this->_type << " barks.." << NC << std::endl;
}