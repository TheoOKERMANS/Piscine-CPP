#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Form*	makeForm(std::string formName, std::string target);

		class FormNameException: public std::exception
		{
			virtual const char* what(void) const throw();
		};
};

#endif