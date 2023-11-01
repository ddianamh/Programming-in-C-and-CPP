/*
CH-230-A
a10_p6.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    Critter a;

    Critter b("Louis");

    Critter c("Svetlana", 2, 2);

    Critter d("Kim", 2, 1, 6.75);

    Critter e("Lorenzo", 2, 1, 11.2, 3.1);

    cout << "\nFirst critter \n";
	a.print();
    cout << "\nSecond critter \n";
	b.print();
    cout << "\nThird critter \n";
	c.print();
    cout << "\nFourth critter \n";
	d.print();
    cout << "\nFifth critter \n";
    e.print();
    cout << endl;
    return 0;
}