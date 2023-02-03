#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	:Form("Presidential pardon form", 25, 5), _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

void	PresidentialPardonForm::beExecute(void) const
{
	std::cout << this->_target << " a été pardonnée par Zaphod Beeblebrox" << std::endl;
}