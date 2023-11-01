
/*
CH-230-A
a12_p1.h
Diana Harambas
dharambas@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"
#include <cmath>
#include <cstring>
using namespace std; 

Shape::Shape(const string& n) : name(n) 
{

}

void Shape::printName() const 
{
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) 
{
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

//copy constructors
Hexagon::Hexagon(const Hexagon& src) : RegularPolygon(src)
{
    side = src.side;
    color = src.color;
}
RegularPolygon::RegularPolygon(const RegularPolygon& src) 
        : CenteredShape(src) 
        {
    EdgesNumber = src.EdgesNumber;
}

CenteredShape::CenteredShape(const CenteredShape& src) 
            : Shape(src)
{
    x = src.x;
    y = src.y;
}

Shape::Shape(const Shape& src) 
{ 
    name = src.name;
}


//parameter value constructor
Hexagon::Hexagon(const string& n, double nx, double ny, int nl, double sv, 
  const string& c) : RegularPolygon(n, nx, ny, nl)
{
    side = sv;
    color = c;
}

//destructor
Hexagon::~Hexagon()
{

}

//setterf for side
void Hexagon::setSide(double s)
{
    side = s;
}         

//setter for color
void Hexagon::setColour(std::string c)
{
    color = c;
}

//getter for side
double Hexagon::getSide() const {
    return side;
}              

//getter for color
std::string Hexagon::getColour() const {
    return color;
}  

//perimeter method
double Hexagon::perimeter() {
    return 6 * side;
}

//area method
double Hexagon::area() {
    return 3 * sqrt(3) * side * side / 2;
}