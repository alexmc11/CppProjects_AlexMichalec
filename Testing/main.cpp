#include "circle.h"
#include <iostream>

void main()
{
	Circle c1(2.0, 3.0, 4.0);
	std::cout << c1.Area();

	Circle c3(2.0, 3.0, 4.0);
	std::cout << c3.Area();

	Circle *c2;
	c2 = new Circle(1.0, 2.0, 3.0);
	std::cout << c2->Area();
	delete c2;
	c2 = nullptr;


}