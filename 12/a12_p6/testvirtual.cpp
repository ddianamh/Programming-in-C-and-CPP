/*
CH-230-A
a12_p6.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1)
	//(1) creating list of objects from class Area
	int index = 0;								// (2)
	//(2) initializing index with 0, this will help
	//iterate through the list
	double sum_area = 0.0;						// (3)
	//(3) initializing the sum of areas with 0
	//an we'll furhter add the areas here
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	//(4) creating a Ring object that has color blue and
	//outer = 5, inner = 2
	//basically from now on we create different objects 
	//from those classes
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
    cout << "Creating Square: ";
    Square pink_square("PINK", 1);
	list[0] = &blue_ring;						// (5)
	//(5)adding the objects we created above to the list
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
    list[6] = &pink_square;
	while (index < num_obj) {					// (7)
	//(7) going through the list 
	//the method getColor() gets the colour of the object
	//the calcArea() method is also applied but this is not
	//the same for every object
		(list[index])->getColor();				
		double area = list[index++]->calcArea();// (8)
		//(8) calculating the area of the current element
		//of the list and adding it to the sum
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
	//(9) printing the sum of all the areas

	//calculating the sum of all perimeters
	double sum_perimeter = 0.0;
	index = 0;
	while (index < num_obj) {	
        (list[index])->getColor();						
		double per = list[index++]->calcPerimeter();
		sum_perimeter += per;
	}
	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;	
	return 0;
}
/*
			AREA
		 /        \
	CIRCLE		RECTANGLE
	   |            |
	 RING         SQUARE

Area is the parent class. The classes Circle and Rectangle are sepparate 
but they inherit Area's properties. The class Ring has direct parent Circle.
And Square (after adding it) has Rectangle as direct parent.
They all have their own definition of the calcArea function.
After adding the calcPerimeter function - this is different for all classes.
*/ 

