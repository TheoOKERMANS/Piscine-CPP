#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "Verification du constructeur de copy" << std::endl;
	{
		Bureaucrat b = Bureaucrat("buro", 1);
		ShrubberyCreationForm src = ShrubberyCreationForm("test copy");
		b.signForm(src);
		ShrubberyCreationForm dst = src;
		std::cout << dst << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Verification de l'execution de Shrubbery" << std::endl;
	{
		ShrubberyCreationForm s = ShrubberyCreationForm("arbre");
		Bureaucrat b = Bureaucrat("bucheron", 1);
		b.signForm(s);
		b.executeForm(s);
	}
	std::cout << std::endl;
	std::cout << "Verification de l'execution de Robotomy" << std::endl;
	{
		RobotomyRequestForm s = RobotomyRequestForm("human");
		Bureaucrat b = Bureaucrat("cyborg", 1);
		b.signForm(s);
		b.executeForm(s);
	}
	std::cout << std::endl;
	std::cout << "Verification de l'execution de Presidential" << std::endl;
	{
		PresidentialPardonForm s = PresidentialPardonForm("Chirac");
		Bureaucrat b = Bureaucrat("premier ministre", 1);
		b.signForm(s);
		b.executeForm(s);
	}
	return (0);
}