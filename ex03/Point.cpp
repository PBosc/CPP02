#include "Point.hpp"
#include <iostream>
#include <cmath>

Point::Point() : _x(0), _y(0)
{
	// std::cout << "Default Point constructor called" << std::endl;
}

Point::Point(const Point &obj)
{
	// std::cout << "Copy Point constructor called" << std::endl;
	this->_x = obj._x;
	this->_y = obj._y;
}

Point& Point::operator=(const Point &rhs)
{
	// std::cout << "Point Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_x = rhs._x;
	this->_y = rhs._y;
	return (*this);
}

Point::~Point()
{
	// std::cout << "Point destructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	// std::cout << "Double Float Point constructor called" << std::endl;
}

float	Point::getXf(void) const
{
	return (this->_x.toFloat());
}

float	Point::getYf(void) const
{
	return (this->_y.toFloat());
}