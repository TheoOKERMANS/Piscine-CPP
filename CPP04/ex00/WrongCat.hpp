#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat( void );
		WrongCat( const WrongCat& cp );
		WrongCat&	operator=( const WrongCat& cp );
		~WrongCat( void );

		void	makeSound( void ) const;
};

#endif