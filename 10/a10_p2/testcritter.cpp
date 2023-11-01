/*
CH-230-A
a10_p2.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

//using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	std::string name;
	int hunger, tiredness;
    double weight;
 
	std::cout << std::endl << "Please enter data: " << std::endl;
	std::cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(std::cin, name);
	c.setName(name);
	std::cout << "Hunger: ";
	std::cin >> hunger;
	c.setHunger(hunger);

    //reading the additional propertiea
    std::cout << "Weight: ";
    std::cin >> weight;
    c.setWeight(weight);

    std::cout << "Tiredness: ";
    std::cin >> tiredness;
    c.setTiredness(tiredness);

    //printing everything
	std::cout << "You have created:" << std::endl;
	c.print();
        return 0;
}