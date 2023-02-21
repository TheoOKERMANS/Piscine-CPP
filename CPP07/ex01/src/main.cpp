#include <iostream>
#include "iter.hpp"

template<class T>
void print(T i)
{
	std::cout << i << std::endl;
}

int main( void )
{
	int i[] = {0 ,1 ,2 ,3 ,4};
	int s = 5;
	::iter(i, s, print);

	char c[] = {'a', 'b', 'c', 'd', 'e'};
	::iter(c, s, print<char>);
	return 0;
}