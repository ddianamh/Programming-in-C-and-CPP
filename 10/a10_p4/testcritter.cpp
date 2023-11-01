/*
CH-230-A
a10_p4.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	//for a, b hunger lvls i use setters
    Critter a;
    a.setHunger(2);

    Critter b("Louis");
    b.setHunger(2);

    //for c, d hunger lvls i put 2 directly in the constructor
    Critter c("Svetlana", 2, 2);

    Critter d("Kim", 2, 1, 6.75);

    cout << "\nFirst critter \n";
	a.print();
    cout << "\nSecond critter \n";
	b.print();
    cout << "\nThird critter \n";
	c.print();
    cout << "\nFourth critter \n";
	d.print();
    return 0;
}

