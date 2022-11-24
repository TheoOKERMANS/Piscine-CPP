#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog& cp )
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->type = cp.type;
}

Dog&	Dog::operator=( const Dog& cp )
{
	std::cout << "Dog: Copy assignment constructor called" << std::endl;
	this->type = cp.type;
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog: Destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof" << std::endl;
}