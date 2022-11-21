#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
	{
		int	size = 2;
		Animal* list[size];
		int	i = 0;

		while (i < size / 2)
			list[i++] = new Dog();
		while (i < size)
			list[i++] = new Cat();
		std::cout << std::endl;
		i = 0;
		while (i < size)
			delete (list[i++]);
	}
	return 0;
}