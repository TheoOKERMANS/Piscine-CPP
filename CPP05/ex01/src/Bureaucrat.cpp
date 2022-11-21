#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) 
	: _name(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& dt)
{
	os << dt.getName() << ", bureaucrat grade " << dt.getGrade();
	return (os);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::gradeUp(void)
{
	if (this->_grade <= 1)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade--;
}

void	Bureaucrat::gradeDown(void)
{
	if (this->_grade >= 150)
		throw (Bureaucrat::GradeTooHighException());
	this->_grade--;
}

void		Bureaucrat::signForm(Form& f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->_name << " couldn't sign " << f.getName()
			<< " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Bureaucrat: Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Bureaucrat: Grade too low");
}