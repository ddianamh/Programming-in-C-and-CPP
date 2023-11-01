/*
CH-230-A
a11_p6.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Vector.h"
using namespace std;

int main()
{
    double ptr2[5]={1,2,3,4,5}, ptr4[5]={0,10,20,30,40};

    //default
    Vector v1 = Vector();
    //with parameters constructor
    Vector v2 = Vector( 5, ptr2 );
    //copy of v2
    Vector v3 = Vector( v2 );
    //another with parameters constructor
    Vector v4 = Vector( 5, ptr4 );

    //Norm of v2
    cout << "v2 has norm = " << v2.norm() << endl;

    //Scalar product 
    cout << "The scalar product of v2 and v4 = ";
    cout << v2.scalar_product( v4 ) << endl;

    //Sum
    cout << "The sum vector of v2 and v4 is ";
    (v2.add(v4)).print();
    cout << endl;

    //Difference
    cout << "The difference vector of v2 and v4 is ";
    (v2.sub(v4)).print();
    cout << endl;
    return 0;
}