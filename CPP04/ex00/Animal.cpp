#include "Animal.hpp"

Animal::Animal( void )
	: type("NONE")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal( const Animal& cp )
	: type(cp.type)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal&	Animal::operator=( const Animal& cp )
{
	std::cout << "Animal: Copy assignment constructor called" << std::endl;
	this->type = cp.type;
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "Animal: Destructor called" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Plop" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::setType( std::string data )
{
	this->type = data;
}
