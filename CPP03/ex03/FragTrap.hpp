#ifndef FRAGTRAP_CPP
#define FRAGTRAP_CPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected :
		FragTrap( void );

	public :
		FragTrap( std::string name );
		FragTrap( const FragTrap &cp);
		FragTrap& operator=( const FragTrap &cp );
		~FragTrap( void );

		void highFivesGuys( void );
};

#endif