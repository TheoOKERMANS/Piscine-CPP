#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private :
		std::string name;
		DiamondTrap( void );

	public :
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap& cp );
		DiamondTrap&	operator=( const DiamondTrap& cp );
		~DiamondTrap( void );

		void	attack( const std::string& target );
		void	whoAmI( void );
		std::string	getName( void ) const;
};

#endif