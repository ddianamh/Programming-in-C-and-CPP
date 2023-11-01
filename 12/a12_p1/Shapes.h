/*
CH-230-A
a12_p1.h
Diana Harambas
dharambas@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   			// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { 
    // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  
    // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon {
    private:
        //size and colour
        double side;
        std::string color;
    public:
      //constructors
        Hexagon();
        Hexagon(const Hexagon&);
        //has 6 sides
        Hexagon( const std::string&, double, double, 
                int, double, const std::string&);
        //destructor
        ~Hexagon();
        //perimeter and area
        double perimeter();
        double area();
        //setters
        void setSide( double );
        void setColour( std::string );
        //getters
        double getSide() const;
        std::string getColour() const;
};
    
#endif