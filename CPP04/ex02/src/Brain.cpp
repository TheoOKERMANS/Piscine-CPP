#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain( const Brain &cp )
{
	int	i;

	std::cout << "Brain: Copy constructor called" << std::endl;
	i = 0;
	while (i < 100)
	{
		this->ideas[i] = cp.getIdea(i);
		i++;
	}
}

Brain&	Brain::operator=( const Brain &cp )
{
	int	i;

	std::cout << "Brain: Copy assignment constructor called" << std::endl;
	i = 0;
	while (i < 100)
	{
		this->ideas[i] = cp.getIdea(i);
		i++;
	}
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "Brain: Destructor called" << std::endl;
}

std::string	Brain::getIdea( int i ) const
{
	return (this->ideas[i]);
}