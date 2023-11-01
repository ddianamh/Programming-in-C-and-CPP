/*
CH-230-A
a10_p3.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include "City.h"

using namespace std;

void City::setName(string& newname)
{
	name = newname;
}

void City::setInhabitants(int newinhabitants) 
{
	inhabitants = newinhabitants;
}

void City::setArea(double newarea) 
{
    area = newarea;
}

void City::print() 
{
	cout << "The city is called " << name << ".\n";
    cout << "It has " << inhabitants << " inhabitants.\n";
    cout << "Its area is " << area << " km^2.\n";
}

string City::getName()
{
	return name;
}

int City::getInhabitants() 
{
	return inhabitants;
}

double City::getArea() 
{
	return area;
}