/*
CH-230-A
a12_p4.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a(4, 2);
	Fraction b(17, 11);
	Fraction c(5);

	a.print(); 
	b.print(); 
	c.print();

	Fraction d, e;
	cout << "First fraction:\n";
	//reading and printing first fraction
	cin >> d;
	cout << d;

	cout << "Second fraction:\n";
	//reading and printing second fraction
	cin >> e;
	cout << e;

	//multiplication and division
	cout << "Multiplication = " << d * e << endl;
	cout << "Division = " << d / e << endl;
	
	return 0;
}