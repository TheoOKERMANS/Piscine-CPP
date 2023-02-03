#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << "Verification de Intern" << std::endl;
	{
		Intern i;
		Form *f;

		try
		{
			f = i.makeForm("Shrubbery Creation", "target");
			std::cout << *f << std::endl;
			delete f;
		}
		catch(std::exception& e)
		{
			std::cout << "Intern couldn't create form Shrubbery Creation because " << e.what() << std::endl;
		}
		
		try
		{
			f = i.makeForm("abcdefg", "target");
			std::cout << *f << std::endl;
			delete f;
		}
		catch(std::exception& e)
		{
			std::cout << "Intern couldn't create form abcdefg because " << e.what() << std::endl;
		}
	}
	return (0);
}