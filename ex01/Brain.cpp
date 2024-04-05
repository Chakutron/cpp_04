#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Brain created" << NC << std::endl;
}

Brain::~Brain()
{
	std::cout << GREEN << "Brain destroyed" << NC << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Brain deep copy" << std::endl;
	int	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = other._ideas[i];
		i++;
	}
	return (*this);
}