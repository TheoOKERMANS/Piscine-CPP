#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private :
		Brain*	brain;
	public :
		Cat( void );
		Cat( const Cat& cp );
		Cat&	operator=( const Cat& cp );
		~Cat( void );

		void	makeSound( void ) const;
		Brain*	getBrain( void ) const;
};

#endif