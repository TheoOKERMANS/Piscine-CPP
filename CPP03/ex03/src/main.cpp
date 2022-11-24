#include "DiamondTrap.hpp"

int	main( void )
{
	{
		DiamondTrap tmp1("a");
		DiamondTrap tmp2("b");
		DiamondTrap b("");
		DiamondTrap a(tmp1);
		b = tmp2;

		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		DiamondTrap a("a");
		std::cout << std::endl;
		DiamondTrap b("b");

		std::cout << std::endl;
		a.attack(b.getName());
		b.takeDamage(a.getAttackDamage());
		b.beRepaired(2);
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
		a.highFivesGuys();
		a.guardGate();
		a.whoAmI();
		std::cout << std::endl;
	}
	
	return (0);
}