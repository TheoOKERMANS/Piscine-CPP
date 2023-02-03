#include "Converter.hpp"

Converter::Converter(void)
{
	this->resetData();
}

Converter::~Converter(void){}

int	special_val(std::string str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (FLOAT);
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (DOUBLE);
	return (NONE);
}

int checkInt(std::string str)
{
	std::string::iterator it = str.begin();
	int negative = 0;
	if (*it == '-')
	{
		it++;
		negative = 1;
	}
	if (it == str.end())
		return (NONE);
	long int conv = 0;
	while (it != str.end())
	{
		if (*it < '0' || *it > '9')
			return (NONE);
		conv *= 10;
		conv += *it - 48;
		it++;
	}
	if (negative == 1 && (conv * -1) < INT_MIN)
		return (NONE);
	else if (conv > INT_MAX)
		return (NONE);
	return (INT);
}

int checkFloatDouble(std::string str)
{
	std::string::iterator it = str.begin();
	int negative = 0;
	if (*it == '-')
	{
		it++;
		negative = 1;
	}
	int nbDigit = 0;
	int point = 0;
	int fpoint = 0;
	while (it != str.end())
	{
		if ((*it < '0' || *it > '9') && *it != '.' && *it != 'f')
			return (NONE);
		if (*it >= '0' && *it <= '9')
			nbDigit += 1;
		if ((*it == '.' && point == 1) || (*it == '.' && nbDigit == 0))
			return (NONE);
		if (fpoint == 1 || (*it == 'f' && nbDigit == 0))
			return (NONE);
		if (*it == '.')
		{
			point = 1;
			nbDigit = 0;
		}
		else if (*it == 'f')
			fpoint = 1;
		it++;
	}
	if (point == 0 || *(str.end() - 1) == '.')
		return (NONE);
	if (fpoint == 1)
		return (FLOAT);
	return (DOUBLE);
}

int getDataType(std::string str)
{
	if (str.length() == 0)
		throw(Converter::EmptyException());
	int type = special_val(str);
	if (type != NONE)
		return (type);
	type = checkInt(str);
	if (type != NONE)
		return (type);
	return (checkFloatDouble(str));
}

void	Converter::resetData(void)
{
	this->_type = NONE;
	this->_str = "";
	this->_isSpecial = false;
}

void	Converter::inputStr(std::string str)
{
	this->_str = str;
	this->_type = getDataType(this->_str);
	if (this->_type == NONE)
		throw(Converter::UnknowTypeException());
	if (special_val(str) > 0)
		this->_isSpecial = true;
}

//todo
void	Converter::printData(void)
{
	std::cout << this->_type << std::endl;
}

const char* Converter::EmptyException::what(void) const throw()
{
	return ("Converter: String is empty");
}

const char* Converter::UnknowTypeException::what(void) const throw()
{
	return ("Converter: String unknow type");
}