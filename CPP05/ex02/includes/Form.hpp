#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private :
		Form(void);
		const std::string	_name;
		bool				_signed;
		const int			_gradeSigned;
		const int			_gradeExec;
		virtual void		beExecute(void) const;
	
	public :
		Form(std::string name, int gradeSigned, int gradeExec);
		virtual ~Form(void) = 0;

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int			getGradeSigned(void) const;
		int			getGradeExec(void) const;

		void		beSigned(Bureaucrat& b);
		void		execute(Bureaucrat const & executor) const;

		class GradeTooHighException: public std::exception
		{
			virtual const char* what(void) const throw();
		};

		class GradeTooLowException: public std::exception
		{
			virtual const char* what(void) const throw();
		};

		class FormNotSignException: public std::exception
		{
			virtual const char* what(void) const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Form& dt);

#endif