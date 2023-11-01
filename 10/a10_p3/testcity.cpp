/*
CH-230-A
a10_p3.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv)
{
	City c1, c2, c3;
    //creating the istaances by initialization
    //using wikipedia for the data

    string name;

    //first instance
    name = "Bremen";
	c1.setName( name );
	c1.setInhabitants(563290);
    c1.setArea(318.21);

    //second instance
    name = "Paris";
    c2.setName(name);
	c2.setInhabitants(2165423);
    c2.setArea(105.4);

    //third instance
    name = "London";
    c3.setName(name);
	c3.setInhabitants(8799800);
    c3.setArea(1.572);

    //printing everything
	cout << "You have created:\nFirst city:\n";
	c1.print();

    cout << "\nSecond city:\n";
    c2.print();

    cout << "\nThird city:\n";
    c3.print();

    return 0;
}