/*
CH-230-A
a12_p7.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

double Ring::calcPerimeter() const {
	std::cout << "calcPerimeter of Ring...";
	return 2 * innerradius * M_PI + Circle::calcPerimeter();
}