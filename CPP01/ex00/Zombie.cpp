#include "Zombie.hpp"

Zombie::Zombie(void)
{
	_name = "<name>";
}

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie* res = new Zombie();
	res->setName(name);
	return (res);
}

void	Zombie::annouce(void)
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ...";
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

std::string	Zombie::getName(void)
{
	return (_name);
}