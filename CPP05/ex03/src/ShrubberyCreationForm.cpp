#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	:Form("Shrubbery creation form", 145, 137), _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

void	ShrubberyCreationForm::beExecute(void) const
{
	std::ofstream*	ofs = new std::ofstream((this->_target + "_shrubbery").c_str(), std::ofstream::out);

	*ofs 
	<< std::endl << "                                                         ."
	<< std::endl << "                                              .         ;  "
	<< std::endl << "                 .              .              ;%     ;;   "
	<< std::endl << "                   ,           ,                :;%  %;   "
	<< std::endl << "                    :         ;                   :;%;'     .,   "
	<< std::endl << "           ,.        %;     %;            ;        %;'    ,;"
	<< std::endl << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'"
	<< std::endl << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' "
	<< std::endl << "               ;%;      %;        ;%;        % ;%;  ,%;'"
	<< std::endl << "                `%;.     ;%;     %;'         `;%%;.%;'"
	<< std::endl << "                 `:;%.    ;%%. %@;        %; ;@%;%'"
	<< std::endl << "                    `:%;.  :;bd%;          %;@%;'"
	<< std::endl << "                      `@%:.  :;%.         ;@@%;'   "
	<< std::endl << "                        `@%.  `;@%.      ;@@%;         "
	<< std::endl << "                          `@%%. `@%%    ;@@%;        "
	<< std::endl << "                            ;@%. :@%%  %@@%;       "
	<< std::endl << "                              %@bd%%%bd%%:;     "
	<< std::endl << "                                #@%%%%%:;;"
	<< std::endl << "                                %@@%%%::;"
	<< std::endl << "                                %@@@%(o);  . '         "
	<< std::endl << "                                %@@@o%;:(.,'         "
	<< std::endl << "                            `.. %@@@o%::;         "
	<< std::endl << "                               `)@@@o%::;         "
	<< std::endl << "                                %@@(o)::;        "
	<< std::endl << "                               .%@@@@%::;         "
	<< std::endl << "                               ;%@@@@%::;.          "
	<< std::endl << "                              ;%@@@@%%:;;;. "
	<< std::endl << "                          ...;%@@@@@%%:;;;;,..    " 
	<< std::endl;
	ofs->close();
	delete (ofs);
}