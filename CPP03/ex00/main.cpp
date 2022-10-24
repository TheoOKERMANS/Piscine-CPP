#include "ClapTrap.hpp"

int	main(int argc, char **argv)
{
	ClapTrap tmp1("a");
	ClapTrap tmp2("b");
	ClapTrap a(tmp1);
	ClapTrap b("");
	b = tmp2;
	a.setAttackDamage(4);

	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(2);
	std::cout << std::endl;

	std::cout << std::endl;
	int	i = 0;
	while (i < 10)
	{
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		b.beRepaired(2);
		i++;
	}
	std::cout << std::endl;
	
	return (0);
}