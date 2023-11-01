/*
CH-230-A
a11_p5.cpp
Diana Harambas
dharambas@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <math.h>
#include "Shapes.h"

//#define M_1_PI 0.318309886183790671537767526745028724
//for perimeter and area of the circle

using namespace std; 

//default constructors
Shape::Shape()
{
    name = "default_shape";
}

CenteredShape::CenteredShape() : Shape()
{
    x = 0;
    y = 0;
}

RegularPolygon::RegularPolygon() : CenteredShape()
{
    EdgesNumber = 0;
}

Circle::Circle() : CenteredShape()
{
    Radius = 0;
}

Rectangle::Rectangle() : RegularPolygon()
{
    Width = 0;
    Height = 0;
}

Square::Square() : Rectangle()
{
    Side = 0;
}

//setters
void Shape::setName(const string& n)
{
    name = n;
}

void CenteredShape::setCenter(double xx, double yy)
{
    x = xx;
    y = yy;
}

void RegularPolygon::setEdgesNumber( int n )
{
    EdgesNumber = n;
}

void Circle::setRadius( double r )
{
    Radius = r;
}

void Rectangle::setWidth( double w )
{
    Width = w;
}

void Rectangle::setHeight( double h )
{
    Height = h;
}

void Square::setSide( double s )
{
    Side = s;
}

//getters
string Shape::getName()
{
    return name;
}

double CenteredShape::getCenterX()
{
    return x;
}

double CenteredShape::getCenterY()
{
    return y;
}

int RegularPolygon::getEdgesNumber()
{
    return EdgesNumber;
}

double Circle::getRadius()
{
    return Radius;
}

double Rectangle::getWidth()
{
    return Width;
}

double Rectangle::getHeight()
{
    return Height;
}

double Square::getSide()
{
    return Side;
}

//copy constructors
Shape::Shape(const Shape& src)
{
    name = src.name;
}

CenteredShape::CenteredShape(const CenteredShape& src) : Shape( src )
{
    x = src.x;
    y = src.y;
}

RegularPolygon::RegularPolygon(const RegularPolygon& src) : CenteredShape( src )
{
    EdgesNumber = src.EdgesNumber;
}

Circle::Circle(const Circle& src) : CenteredShape( src )
{
    Radius = src.Radius;
}

Rectangle::Rectangle(const Rectangle& src) : RegularPolygon( src )
{
    Width = src.Width;
    Height = src.Height;
}

Square::Square(const Square& src) : Rectangle( src )
{
    Side = src.Side;
}

//rectangle and square value constructors
Rectangle::Rectangle(const string& n, double nx, double ny, 
                double nwidth, double nheight) : RegularPolygon(n, nx, ny, 4)
{
    Width = nwidth;
    Height = nheight;
}

Square::Square(const string& n, double nx, double ny, double nside) :
                                         Rectangle(n, nx, ny, nside, nside)
{
    Side = nside;
}

//perimeters
double Circle::perimeter()
{
    return (2 * M_PI * Radius);
}

double Rectangle::perimeter()
{
    return (Width + Width + Height + Height);
}

double Square::perimeter()
{
    return (4 * Side);
}

//areas
double Circle::area()
{
    return (M_PI * Radius * Radius);
}

double Rectangle::area()
{
    return (Height * Width);
}

double Square::area()
{
    return (Side * Side);
}


//other constructors and methods
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