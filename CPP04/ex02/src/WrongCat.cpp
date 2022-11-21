#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& cp )
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	this->type = cp.type;
}

WrongCat&	WrongCat::operator=( const WrongCat& cp )
{
	std::cout << "WrongCat: Copy assignment constructor called" << std::endl;
	this->type = cp.type;
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}


void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong Miaw" << std::endl;
}