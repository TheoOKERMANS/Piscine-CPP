#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private :
		std::string	_target;
		void		beExecute(void) const;
		
	public :
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);
};

#endif