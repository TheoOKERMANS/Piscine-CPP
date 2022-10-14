#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class FileManager
{
	private :
		std::string		_fileName;
		std::ifstream	_fileStream;

	public :
		FileManager( void );
		~FileManager( void );
		int		setFile( std::string fileName );
		int		replace( std::string s1, std::string s2 );
		void	writeOutfile( std::string toWrite );
};

#endif