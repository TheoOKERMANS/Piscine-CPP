#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private :
		std::string	_target;
		void		beExecute(void) const;
		
	public :
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);
};

#endif