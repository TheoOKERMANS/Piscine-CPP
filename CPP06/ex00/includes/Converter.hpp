#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include "Const.hpp"
#include <string>
#include <climits>
#include <iostream>

class Converter
{
	private:
		int _type;
		bool _isSpecial;
		std::string _str;

	public:
		Converter(void);
		Converter(const Converter& cp);
		Converter& operator=(const Converter& cp);
		~Converter(void);

		void	resetData(void);
		void	inputStr(std::string str);
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