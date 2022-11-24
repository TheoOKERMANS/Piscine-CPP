#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat& cp )
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->type = cp.type;
}

Cat&	Cat::operator=( const Cat& cp )
{
	std::cout << "Cat: Copy assignment constructor called" << std::endl;
	this->type = cp.type;
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Cat: Destructor called" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaw" << std::endl;
}