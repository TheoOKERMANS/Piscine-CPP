#include <iostream>
#include "Array.hpp"

int main( void )
{
	std::cout << std::endl;
	{
		Array<int> a(5);
		std::cout << a[0] << std::endl;
		a[0] = 42;
		std::cout << a[0] << std::endl;


		try
		{
			std::cout << a[5] << std::endl;
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Array<int> a(5);
		a[0] = 42;

		Array<int> b = a;

		std::cout << b[0] << std::endl;

		b[0] = 21;
		std::cout << b[0] << std::endl;
		std::cout << a[0] << std::endl;
	}
	std::cout << std::endl;
	{
		Array<int> a(5);
		a[0] = 42;

		Array<int> b(a);

		std::cout << b[0] << std::endl;

		b[0] = 21;
		std::cout << b[0] << std::endl;
		std::cout << a[0] << std::endl;
	}
	std::cout << std::endl;
	return 0;
}