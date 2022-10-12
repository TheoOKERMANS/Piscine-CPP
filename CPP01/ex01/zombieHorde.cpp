#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombieList = new Zombie[N];
	int		i = 0;

	while (i < N)
	{
		zombieList[i].setName(name);
		i++;
	}
	return (zombieList);
}