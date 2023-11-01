/*
CH-230-A
a12_p6.cpp
Diana Harambas
dharambas@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Square.h"

Square::Square(const char *n, double s) : Rectangle(n, s, s) {
	side = s;
}

Square::~Square() {
}

double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return (side * side);
}

double Square::calcPerimeter() const {
	std::cout << "calcPerimeter of Square...";
	return 4 * side;
}
