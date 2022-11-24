#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
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
		int	i = 0;
		while (i < 10)
		{
			a.attack(b.getName());
			b.takeDamage(a.getAttackDamage());
			b.beRepaired(2);
			i++;
		}
		std::cout << std::endl;
		a.guardGate();
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl << std::endl;
	{
		FragTrap tmp1("a");
		FragTrap tmp2("b");
		FragTrap a(tmp1);
		FragTrap b("");
		b = tmp2;

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
		std::cout << std::endl;
	}
	/*
	
	*/
	return (0);
}