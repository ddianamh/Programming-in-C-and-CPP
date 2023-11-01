/*
CH-230-A
a10_p4.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter()
{
    //sets name to default_critter, height to 5, rest to 0
    name = "default_critter";
    height = 5;
    hunger = 0;
    boredom = 0;
    //message
    cout << "Constructor one is being called" << endl;
}


Critter::Critter( string s )
{
    //name must be s
    name = s;
    //sets height to 5, rest to 0
    height = 5;
    hunger = 0;
    boredom = 0;
    //message
    cout << "Constructor two is being called" << endl;
}


Critter::Critter( string s, int hu, int b, double he )
{
    //initializations
    name = s;
    hunger = hu;
    boredom = b;
    height = he;
    //message
    cout << "Constructor three is being called" << endl;
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
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom)
{
    boredom = newboredom;
}

void Critter::setHeight(double newheight)
{
    height = newheight;
}

void Critter::print() 
{
	cout << "I am " << name << ". My hunger level is " << hunger << ","; 
    cout << " my boredom level is " << boredom << ", and";
    cout << " my height is " << height << ".\n";
}

int Critter::getHunger() 
{
	return hunger;
}

int Critter::getBoredom()
{
    return boredom;
}

double Critter::getHeight()
{
    return height;
}