#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << YELLOW << "(Cat) Default constructor called" << NC << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::~Cat(void)
{
	delete (this->_brain);
	std::cout << YELLOW << "(Cat) Destructor called" << NC << std::endl;
}

Cat::Cat(const Cat &other) : A_Animal(other)
{
	std::cout << YELLOW << "(Cat) Copy constructor called" << NC << std::endl;
	this->_brain = new Brain();
	*this = other;
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << YELLOW << "(Cat) Copy assignment operator called" << NC << std::endl;
	this->_type = other.getType();
	*(this->_brain) = *(other._brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << BLUE << "The " << this->_type << " meows.." << NC << std::endl;
}