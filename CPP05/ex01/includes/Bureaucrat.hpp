#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private :
		const std::string	_name;
		int			_grade; 

	public :
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);

		std::string	getName(void) const;
		int			getGrade(void) const;

		void		gradeUp(void);
		void		gradeDown(void);
		void		signForm(Form& f);

		class GradeTooHighException: public std::exception
		{
			virtual const char* what(void) const throw();
		};

		class GradeTooLowException: public std::exception
		{
			virtual const char* what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& dt);

#endif