#include <iostream>
#include <stdlib.h>
#include <time.h>

class Base {
	public:
		virtual ~Base(void){}
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void)
{
	Base* res = NULL;
	srand (time(NULL));
	int r = rand() % 3 + 1;
	if (r == 1)
	{
		A* a = new A;
		res = dynamic_cast<Base*>(a);
	}
	else if (r == 2)
	{
		B* b = new B;
		res = dynamic_cast<Base*>(b);
	}
	else
	{
		C* c = new C;
		res = dynamic_cast<Base*>(c);
	}
	return res;
}

void identify(Base* p)
{
	A* tst = dynamic_cast<A*>(p);
	B* tst1 = dynamic_cast<B*>(p);
	C* tst2 = dynamic_cast<C*>(p);
	if (tst)
		std::cout << "Is A\n";
	if (tst1)
		std::cout << "Is B\n";
	if (tst2)
		std::cout << "Is C\n";
}
void identify(Base& p)
{
	try
	{
		A& tst = dynamic_cast<A&>(p);
		(void)tst;
		std::cout << "Is A\n";
	}
	catch(std::exception& e)
	{
		std::cout << "";
	}
	try
	{
		B& tst = dynamic_cast<B&>(p);
		(void)tst;
		std::cout << "Is B\n";
	}
	catch(std::exception& e)
	{
		std::cout << "";
	}
	try
	{
		C& tst = dynamic_cast<C&>(p);
		(void)tst;
		std::cout << "Is C\n";
	}
	catch(std::exception& e)
	{
		std::cout << "";
	}
}

int	main(void)
{
	Base* b = generate();
	identify(b);
	identify(*b);
	delete b;
	return 0;
}