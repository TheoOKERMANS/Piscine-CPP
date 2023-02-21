#include <stdint.h>
#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data d;
	d.val = 42;

	Data* ptr = &d;
	uintptr_t iptr = serialize(ptr);

	Data* res = deserialize(iptr);
	std::cout << res->val << std::endl;
	
	return 0;
}