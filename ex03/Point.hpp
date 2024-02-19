#ifndef POINT_H
# define POINT_H


# include "Fixed.hpp"

class Point
{
	private:
		Fixed	_x;
		Fixed	_y;
		
	public:
		Point();
		Point(const  Point &obj);
		Point& operator=(const Point &rhs);
		~Point();
		Point(const float x, const float y);
		float	getXf(void) const;
		float	getYf(void) const;
		
};

#endif