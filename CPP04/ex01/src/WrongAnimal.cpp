#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
	: type("NONE")
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& cp )
	: type(cp.type)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& cp )
{
	std::cout << "WrongAnimal: Copy assignment constructor called" << std::endl;
	this->type = cp.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Wrong Plop" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::setType( std::string data )
{
	this->type = data;
}
