/*
CH-230-A
a12_p7.cpp
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
 
const int num_obj = 25;

//colours to choose from
const char *col[] = {"RED", "BLACK", "VIOLET", "BLUE"};

int main() {
	Area *list[num_obj];						
	
	int index = 0;								
	while (index < num_obj) 
	{	
		int shape;
		shape = rand() % 4;

		int colour;
		colour = rand() % 4;
		//index from col[]

		double size1, size2;
		size1 = 5 + rand() % 96; //will give number from 5 to 100
		size2 = 5 + rand() % 96;
		switch( shape )
		{
			case 0:
			{
				//rectangle
				Rectangle newobject = Rectangle( col[colour], size1, size2);
				list[index] = &newobject;
				cout << index << endl;
				cout << "This is a rectangle of colour " << col[colour];
				cout << "\nArea: " << list[index]->calcArea();
				cout << "\nPerimeter: " << list[index]->calcPerimeter();
				cout << endl;
				break;
			}
				
			case 1:
			{
				//square
				Square newobject = Square( col[colour], size1);
				list[index] = &newobject;
				cout << index << endl;
				cout << "This is a square of colour " << col[colour];
				cout << "\nArea: " << list[index]->calcArea();
				cout << "\nPerimeter: " << list[index]->calcPerimeter();
				cout << endl;
				break;
			}
				
			case 2:
			{
				//circle
				Circle newobject = Circle( col[colour], size1);
				list[index] = &newobject;
				cout << index << endl;
				cout << "This is a circle of colour " << col[colour];
				cout << "\nArea: " << list[index]->calcArea();
				cout << "\nPerimeter: " << list[index]->calcPerimeter();
				cout << endl;
				break;
			}
				
			case 3:
			{
				//ring
				if( size1 < size2 )
					swap( size1, size2 );
					//need to have outer radius greater than the inner one
				Ring newobject = Ring( col[colour], size1, size2);
				list[index] = &newobject;
				cout << index << endl;
				cout << "This is a ring of colour " << col[colour];
				cout << "\nArea: " << list[index]->calcArea();
				cout << "\nPerimeter: " << list[index]->calcPerimeter();
				cout << endl;
				break;
			}
			default:
				break;
		}
		index++;
	}
	
	return 0;
}


