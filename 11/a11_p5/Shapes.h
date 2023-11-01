/*
CH-230-A
a11_p5.h
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
        void setName(const std::string&); //setter
        std::string getName();           //getter
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
        // usual three constructors
		CenteredShape(const std::string&, double, double);  
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	
        // moves the shape, i.e. it modifies it center
        void setCenter(double, double);
        double getCenterX();
        double getCenterY();
};

class RegularPolygon : public CenteredShape { 
    // a regular polygon is a centered_shape with a number of edges
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
        void setEdgesNumber(int);
        int getEdgesNumber();
};

class Circle : public CenteredShape {  
    // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
        void setRadius(double);
        double getRadius();
        double perimeter();
        double area();
};

class Rectangle : public RegularPolygon {
    //Rectangle is a regular polygon with 4 sides
    private:
        double Width, Height;
    public:
        //the three constructors
        Rectangle();
        Rectangle(const std::string& n, double nx, double ny, 
                 double nwidth, double nheight);
        Rectangle(const Rectangle&);
        void setWidth(double);
        void setHeight(double);
        double getWidth();
        double getHeight();
        double perimeter();
        double area();
};

class Square : public Rectangle {
    //Square is a rectangle with all sides equal
    private:
        double Side;
    public:
        //the three constructors
        Square();
        Square(const std::string& n, double nx, double ny, double nside);
        Square(const Square&);
        void setSide(double);
        double getSide();
        double perimeter();
        double area();
};
#endif