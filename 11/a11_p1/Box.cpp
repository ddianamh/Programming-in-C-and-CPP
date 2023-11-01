/*
CH-230-A
a11_p1.cpp
Diana Harambas
dharambas@jacobs-university.de
*/

#include <iostream>
#include "Box.h"
using namespace std;

//setters
void Box::setHeight( double h )
{
    height = h;
}

void Box::setWidth( double w )
{
    width = w;
}

void Box::setDepth( double d )
{
    depth = d;
}

//getters
double Box::getWidth()
{
    return width;
}

double Box::getHeight()
{
    return height;
}

double Box::getDepth()
{
    return depth;
}

//constructors

//default
Box::Box()
{
    cout << "Default constructor was called\n";
    height = 0;
    width = 0;
    depth = 0;
    //everything gets value 0
}

//copy
Box::Box(const Box &src)
{
    cout << "Copy constructor was called\n";
    height = src.height;
    width = src.width;
    depth = src.depth;
}

//constructor with values
Box::Box(double h, double w, double d)
{
    cout << "Specific constructor was called\n";
    height = h;
    width = w;
    depth = d;
}

//destructor
Box::~Box()
{
   //empty
}