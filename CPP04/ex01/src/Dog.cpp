#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog& cp )
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->type = cp.type;
	this->brain = new Brain();
	*(this->brain) = *(cp.getBrain());
}

Dog&	Dog::operator=( const Dog& cp )
{
	std::cout << "Dog: Copy assignment constructor called" << std::endl;
	this->type = cp.type;
	this->brain = cp.getBrain();
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete (this->brain);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof" << std::endl;
}

Brain*	Dog::getBrain( void ) const
{
	return (this->brain);
}