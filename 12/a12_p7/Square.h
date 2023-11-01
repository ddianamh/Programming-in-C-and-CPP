/*
CH-230-A
a12_p7.h
Diana Harambas
dharambas@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
	public:
		Square(const char *n, double side);
		~Square();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double side;
};

#endif
