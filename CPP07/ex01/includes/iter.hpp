#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template<class T>
void iter(T* a, int s, void (*fun)(T))
{
	int i = 0;
	while (i < s)
	{
		fun(a[i]);
		i++;
	}
}

#endif