/*
CH-230-A
a11_p3.cpp
Diana Harambas 
dharambas@jacobs-university.de
*/

#include <iostream>
#include "Creature.h"
using namespace std;

Creature::Creature(): distance(10)
{
    cout << "Creature constructor called\n";
}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

Creature::~Creature()
{
    cout << "Creature destructor called\n";
} 

Wizard::Wizard() : distFactor(3)
{
    cout << "Wizard constructor called\n";
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Wizard::~Wizard()
{
    cout << "Wizard destructor called\n";
}

Unicorn::Unicorn() : speed(50)
{
    cout << "Unicorn constructor called \n";
}  

void Unicorn::time() const
{
    cout << "time of the journey = ";
    double time;
    time = ((double) distance) / ((double) speed);
    cout << time << " seconds\n";
}

Unicorn::~Unicorn() 
{
    cout << "Unicorn destructor called\n";
}

Mermaid::Mermaid() : weightFactor(0.1)
{
    cout << "Mermaid constructor called \n";
}  

void Mermaid::weightloss() const
{
    cout << "the weight lost = ";
    double wl;
    wl = distance * weightFactor;
    cout << wl << " kg\n";
}

Mermaid::~Mermaid() 
{
    cout << "Mermaid destructor called\n";
}
