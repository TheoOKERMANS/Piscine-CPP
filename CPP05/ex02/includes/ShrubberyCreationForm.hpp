#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <sstream>

class ShrubberyCreationForm : public Form
{
	private :
		std::string	_target;
		void		beExecute(void) const;

	public :
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);
};

#endif