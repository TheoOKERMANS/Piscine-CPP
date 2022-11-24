#include "Zombie.hpp"

int main()
{
	Zombie z1 = Zombie("zombie1");
	z1.annouce();
	Zombie* z2 = newZombie("zombie2");
	z2->annouce();
	Zombie* z3 = new Zombie("zombie3");
	z3->annouce();
	randomChump("zombie4");
	delete z3;
	delete z2;
	return (1);
}