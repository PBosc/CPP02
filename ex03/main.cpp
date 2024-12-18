#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <string>
#include <cmath>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point 	a(3, 1);
	Point 	b(6, -2);
	Point 	c(8, 8);
	Point 	inside(5, 2);
	Point	outside(4, 5);

	if (bsp(a, b, c, inside))
		std::cout << "Point INSIDE triangle" << std::endl;
	else
		std::cout << "Point OUTSIDE triangle" << std::endl;

	if (bsp(a, b, c, outside))
		std::cout << "Point INSIDE triangle" << std::endl;
	else
		std::cout << "Point OUTSIDE triangle" << std::endl;
	return 0;
}