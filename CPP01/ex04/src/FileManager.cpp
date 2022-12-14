#include "FileManager.hpp"

FileManager::FileManager( void ) : _fileName("")
{
}

FileManager::~FileManager( void )
{
	delete (this->_fileStream);
}

int	FileManager::setFile( std::string fileName )
{
	if (fileName == "")
	{
		std::cout << "File name can't be empty" << std::endl;
		return (0);
	}
	this->_fileName = fileName;
	this->_fileStream = new std::ifstream(fileName.c_str(), std::ifstream::in);
	if (this->_fileStream->good() == 0)
	{
		this->_fileStream->close();
		std::cout << "File does not exists" << std::endl;
		return (0);
	}
	return (1);
}

int	FileManager::replace( std::string s1, std::string s2 )
{
	std::string 		str;
	std::stringstream	buffer;
	int					strLen;
	int					s1Len;
	int					s2Len;
	int					i;

	if (s1 == "" || s2 == "")
	{
		this->_fileStream->close();
		std::cout << "s1 and s2 can't be empty" << std::endl;
		return (0);
	}
	buffer << this->_fileStream->rdbuf();
	str = buffer.str();
	strLen = str.length();
	s1Len = s1.length();
	s2Len = s2.length();
	i = 0;
	while (i < strLen - s1Len + 1)
	{
		if (str.compare(i, s1Len, s1) == 0)
		{
			str.erase(i, s1Len);
			str.insert(i, s2);
			strLen = str.length();
			if (s2Len > s1Len)
				i += s2Len - s1Len;
		}
		i++;
	}
	writeOutfile(str);
	return (1);
}

void	FileManager::writeOutfile( std::string toWrite )
{
	std::ofstream*	ofs = new std::ofstream((this->_fileName + ".replace").c_str(), std::ofstream::out);

	*ofs << toWrite;
	ofs->close();
	delete (ofs);
}