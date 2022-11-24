#ifndef FRAGTRAP_CPP
#define FRAGTRAP_CPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected :
		FragTrap( void );
		static const int hp = 100;
		static const int ep = 100;
		static const int ad = 30;

	public :
		FragTrap( std::string name );
		FragTrap( const FragTrap &cp);
		FragTrap& operator=( const FragTrap &cp );
		~FragTrap( void );

		void highFivesGuys( void );
};

#endif