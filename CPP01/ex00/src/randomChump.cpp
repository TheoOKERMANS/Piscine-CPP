#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie* z = new Zombie(name);
	z->annouce();
	delete z;
}