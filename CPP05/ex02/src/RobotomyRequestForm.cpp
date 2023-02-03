#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	:Form("Robotomy request form", 72, 45), _target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

void		RobotomyRequestForm::beExecute(void) const
{
	std::cout << "*bruits de perceuses*" << std::endl;
	srand(time(NULL));
	int r = rand() % 2;
	if (r == 0)
		std::cout << this->_target << " a été robotomisé" << std::endl;
	else
		std::cout << this->_target << " n'a pas été robotomisé" << std::endl;
}