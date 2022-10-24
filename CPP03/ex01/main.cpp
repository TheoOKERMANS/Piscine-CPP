#include "ScavTrap.hpp"

int	main(int argc, char **argv)
{
	ScavTrap tmp1("a");
	ScavTrap tmp2("b");
	ScavTrap a(tmp1);
	ScavTrap b("");
	b = tmp2;

	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(2);
	std::cout << std::endl;
	a.guardGate();
	std::cout << std::endl;
	return (0);
}