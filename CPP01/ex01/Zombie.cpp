#include "Zombie.hpp"

Zombie::Zombie() : name("NONE")
{
}

Zombie::~Zombie( void )
{
	std::cout << "Deleting zombie " << name << std::endl;
}

void	Zombie::annouce(void)
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." 
				<< std::endl;
}

void	Zombie::setName( std::string name)
{
	this->name = name;
}