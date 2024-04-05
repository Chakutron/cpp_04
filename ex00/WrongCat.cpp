#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << YELLOW << "(WrongCat) Default constructor called" << NC << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << YELLOW << "(WrongCat) Destructor called" << NC << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << YELLOW << "(WrongCat) Copy constructor called" << NC << std::endl;
	*this = other;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << YELLOW << "(WrongCat) Copy assignment operator called" << NC << std::endl;
	this->_type = other.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << BLUE << "The " << this->_type << " meows.." << NC << std::endl;
}