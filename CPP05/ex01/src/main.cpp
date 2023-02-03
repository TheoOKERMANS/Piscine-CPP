#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Form f = Form("fire", 151, 151);
		std::cout << f << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		Form f = Form("fire", 0, 0);
		std::cout << f << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form src = Form("copy test", 100, 150);
		Form dst = src;
		std::cout << dst << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		Bureaucrat b1 = Bureaucrat("Bender", 140);
		Bureaucrat b2 = Bureaucrat("Fry", 100);
		Form f = Form("fire", 100, 150);
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << f << std::endl;
		b1.signForm(f);
		b2.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}