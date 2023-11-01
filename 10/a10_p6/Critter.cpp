/*
CH-230-A
a10_p6.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

double Critter::numberdouble( int a )
{
    double b;
    b = ((double) a) / 10.0;
    return b;
}

int Critter::numberint( double a )
{
    int b;
    b = a * 10;
    return b;
}

Critter::Critter()
{
    //sets name to default_critter, height to 5, rest to 0
    name = "default_critter";
    height = 5;
    hunger = 0.0;
    boredom = 0;
    thirst = hunger;
    //message
    cout << "Constructor one is being called" << endl;
}


Critter::Critter( string s )
{
    //name must be s
    name = s;
    //sets height to 5, rest to 0
    height = 5;
    hunger = 0.0;
    boredom = 0;
    thirst = hunger;
    //message
    cout << "Constructor two is being called" << endl;
}


Critter::Critter( string s, int hu, int b, double he )
{
    //initializations
    name = s;
    hunger = numberdouble(hu);
    boredom = b;
    height = he;
    thirst = hunger;
    //message
    cout << "Constructor three is being called" << endl;
}

Critter::Critter( string s, int hu, int b, double he, double t )
{
    //initializations
    name = s;
    hunger = numberdouble(hu);
    boredom = b;
    height = he;
    thirst = t;
    //message
    cout << "Constructor four is being called" << endl;
}

Critter::~Critter()
{
	cout << "Destructor is called" << endl;
}

void Critter::setName(string& newname) 
{
	name = newname;
}

void Critter::setHunger(int newhunger) 
{
	//converting from int to double
    hunger = numberdouble(newhunger);
}

void Critter::setBoredom(int newboredom)
{
    boredom = newboredom;
}

void Critter::setHeight(double newheight)
{
    height = newheight;
}

void Critter::setThirst(double newthirst)
{
    thirst = newthirst;
}

void Critter::print() 
{
	cout << "I am " << name << ". My hunger level is " << numberint(hunger);
    cout << ", my boredom level is " << boredom << ",";
    cout << " my height is " << height << ", and my ";
    cout << " thirst level is " << thirst <<".\n";
}

int Critter::getHunger() 
{
	//converting from double to int
    return numberint(hunger);
}

int Critter::getBoredom()
{
    return boredom;
}

double Critter::getHeight()
{
    return height;
}

double Critter::getThirst()
{
    return thirst;
}



