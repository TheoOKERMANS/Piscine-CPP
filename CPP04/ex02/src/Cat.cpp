#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( const Cat& cp )
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->type = cp.type;
	this->brain = new Brain();
	*(this->brain) = *(cp.getBrain());
}

Cat&	Cat::operator=( const Cat& cp )
{
	std::cout << "Cat: Copy assignment constructor called" << std::endl;
	this->type = cp.type;
	this->brain = cp.getBrain();
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete (this->brain);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaw" << std::endl;
}


Brain*	Cat::getBrain( void ) const
{
	return (this->brain);
}