#include "Converter.hpp"

Converter::Converter(void)
{
	this->resetData();
}

Converter::Converter(const Converter& cp)
	: _type(cp._type), _isSpecial(cp._isSpecial), _str(cp._str)
		, _charVal(cp._charVal), _intVal(cp._intVal), _floatVal(cp._floatVal), 
			_doubleVal(cp._doubleVal)
{}

Converter&	Converter::operator=(const Converter& cp)
{
	this->_type = cp._type;
	this->_isSpecial = cp._isSpecial;
	this->_str = cp._str;
	this->_charVal = cp._charVal;
	this->_intVal = cp._intVal;
	this->_floatVal = cp._floatVal;
	this->_doubleVal = cp._doubleVal;
	return (*this);
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
	if (*it == '-')
		it++;
	if (it == str.end())
		return (NONE);
	while (it != str.end())
	{
		if (*it < '0' || *it > '9')
			return (NONE);
		it++;
	}
	return (INT);
}

int checkFloatDouble(std::string str)
{
	std::string::iterator it = str.begin();
	if (*it == '-')
		it++;
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

void	Converter::initVal(void)
{
	if (this->_isSpecial == false)
	{
		this->_intVal = atoi(this->_str.c_str());
		if (this->_intVal < 127 && this->_intVal > 31)
			this->_charVal = this->_intVal;
		else
			this->_charVal = 0;
		this->_doubleVal = atof(this->_str.c_str());
		this->_floatVal = this->_doubleVal;
	}
}

void	Converter::resetData(void)
{
	this->_type = NONE;
	this->_str = "";
	this->_isSpecial = false;
	this->_charVal = 0;
	this->_intVal = 0;
	this->_floatVal = 0.0f;
	this->_doubleVal = 0.0;
}

void	Converter::inputStr(std::string str)
{
	this->_str = str;
	this->_type = getDataType(this->_str);
	if (this->_type == NONE)
		throw(Converter::UnknowTypeException());
	if (special_val(str) > 0)
		this->_isSpecial = true;
	this->initVal();
}

void	Converter::printChar(void)
{
	std::cout << "char: " ;
	if (this->_isSpecial == true)
		std::cout << "impossible";
	else if (this->_charVal == 0)
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(this->_charVal) << "'";
	std::cout << std::endl;
}

void	Converter::printInt(void)
{
	std::cout << "int: " ;
	if (this->_isSpecial == false 
			&& std::numeric_limits<int>::max() >= this->_doubleVal
				&& std::numeric_limits<int>::min() <= this->_doubleVal)
		std::cout << this->_intVal;
	else
		std::cout << "impossible";
	std::cout << std::endl;
}

void	Converter::printFloat(void)
{
	std::cout << "float: ";
	if (this->_isSpecial == true)
	{
		std::cout << this->_str;
		if (this->_type == DOUBLE)
			std::cout << "f";
		std::cout << std::endl;
	}
	else
	{
		if (std::numeric_limits<float>::max() >= this->_doubleVal
			&& -std::numeric_limits<float>::max() <= this->_doubleVal)
		{
			std::cout << this->_floatVal;
			if (this->_floatVal - static_cast<int>(this->_floatVal) == 0)
				std::cout << ".0";
			std::cout << "f\n";
		}
		else
			std::cout << "impossible\n";
	}
}

void	Converter::printDouble(void)
{
	std::cout << "double: ";
	if (this->_isSpecial == true)
	{
		if (this->_type == DOUBLE)
			std::cout << this->_str << std::endl;
		else
			std::cout << this->_str.substr(0, this->_str.size() - 1) << std::endl;
	}	
	else
	{
		std::cout << this->_doubleVal;
		if (this->_doubleVal - static_cast<int>(this->_doubleVal) == 0)
			std::cout << ".0";
		std::cout << std::endl;
	}
}

void	Converter::printData(void)
{
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
}

const char* Converter::EmptyException::what(void) const throw()
{
	return ("Converter: String is empty");
}

const char* Converter::UnknowTypeException::what(void) const throw()
{
	return ("Converter: String unknow type");
}