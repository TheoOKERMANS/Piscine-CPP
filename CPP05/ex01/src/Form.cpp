#include "Form.hpp"

Form::Form(std::string name, int gradeSigned, int gradeExec)
	: _name(name), _signed(false), _gradeSigned(gradeSigned)
	, _gradeExec(gradeExec)
{
	if (gradeSigned > 150 || gradeExec > 150)
		throw (Form::GradeTooHighException());
	else if (gradeSigned < 1 || gradeExec < 1)
		throw (Form::GradeTooLowException());
}

Form::~Form(void)
{}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

int			Form::getGradeSigned(void) const
{
	return (this->_gradeSigned);
}

int			Form::getGradeExec(void) const
{
	return (this->_gradeExec);
}

void		Form::beSigned(Bureaucrat& b)
{
	if (b.getGrade() > this->_gradeSigned)
		throw (Form::GradeTooLowException());
	this->_signed = true;
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return ("Form: Grade too high");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("Form: Grade too low");
}

std::ostream&	operator<<(std::ostream& os, const Form& dt)
{
	os << dt.getName() << ", ";
	if (dt.getSigned() == true)
		os << "is ";
	else
		os << "isn't ";
	os << "signed" << std::endl << "	grade to signe : "
		<< dt.getGradeSigned() << std::endl <<  "	grade to exec : "
		<< dt.getGradeExec();
	return (os);
}