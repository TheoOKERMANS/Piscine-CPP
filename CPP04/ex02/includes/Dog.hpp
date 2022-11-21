#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal
{
	private :
		Brain*	brain;
	public :
		Dog( void );
		Dog( const Dog& cp );
		Dog&	operator=( const Dog& cp );
		~Dog( void );

		void	makeSound( void ) const;
		Brain*	getBrain( void ) const;
};

#endif