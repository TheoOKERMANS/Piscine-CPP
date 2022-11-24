#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : name(name)
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