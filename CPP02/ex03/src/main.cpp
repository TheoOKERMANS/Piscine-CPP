#include "Point.hpp"

int main(void)
{\
	Point a(4.0f, 1.0f);
	Point b(2.0f, -1.0f);
	Point c(6.0f, 0.0f);

	Point d(4.0f, 0.0f);
	if (bsp(a, b, c, d) == 1)
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	
	Point d1(3.0f, 0.5f);
	if (bsp(a, b, c, d1) == 1)
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	
	Point d2(5.0f, 0.49f);
	if (bsp(a, b, c, d2) == 1)
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;

	Point d3(5.0f, -0.3f);
	if (bsp(a, b, c, d3) == 1)
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	
	return 0;
}