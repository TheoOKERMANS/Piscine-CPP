#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat b = Bureaucrat("test", 140);
		std::cout << b << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b = Bureaucrat("test", 0);
		std::cout << b << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b = Bureaucrat("test", 151);
		std::cout << b << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}