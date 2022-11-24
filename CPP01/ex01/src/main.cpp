#include "Zombie.hpp"

int main()
{
	int		nbZombie = 10;
	Zombie* zl = zombieHorde(nbZombie, "42");
	int		i = 0;

	while (i < nbZombie)
	{
		std::cout << "Zombie " << i + 1 << " : ";
		zl[i].annouce();
		i++;
	}
	delete [] zl;
	return (1);
}