#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include "Const.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <limits>

class Converter
{
	private:
		int _type;
		bool _isSpecial;
		std::string _str;

		char	_charVal;
		int		_intVal;
		float	_floatVal;
		double	_doubleVal;

	public:
		Converter(void);
		Converter(const Converter& cp);
		Converter& operator=(const Converter& cp);
		~Converter(void);

		void	initVal(void);
		void	resetData(void);
		void	inputStr(std::string str);

		void	printChar(void);
		void	printInt(void);
		void	printFloat(void);
		void	printDouble(void);
		void	printData(void);

		class EmptyException: public std::exception
		{
			virtual const char* what(void) const throw();
		};

		class UnknowTypeException: public std::exception
		{
			virtual const char* what(void) const throw();
		};
};

#endif