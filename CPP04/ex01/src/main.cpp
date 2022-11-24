#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;
		delete j;
		delete i;
		std::cout << std::endl;
	}
	{
		int	size = 5;
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