/*
CH-230-A
a10_p8.cpp
Diana Harambas 
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Complex.h"
using namespace std;

int main()
{
    int r, imag;

    cout << "Data for the first instance:\n";
    cin >> r >> imag;
    Complex c1(r, imag);

    cout << "The conjugate of the first instance is: ";
    Complex c1c;
    c1c = c1.conj();
    c1c.print();
    cout << endl;

    cout << "Data for the second instance:\n";
    cin >> r >> imag;
    Complex c2(r, imag);

    cout << "The sum of the first two instances is: ";
    Complex sum12;
    sum12 = c1.add(c2);
    sum12.print();
    cout << endl;

    cout << "The difference of the second and first instances is: ";
    Complex dif21;
    dif21 = c2.sub(c1);
    dif21.print();
    cout << endl;

    cout << "The product of the first two instances is: ";
    Complex prod12;
    prod12 = c1.mult(c2);
    prod12.print();
    cout << endl;
    
    return 0;
}