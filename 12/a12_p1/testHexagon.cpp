/*
CH-230-A
a12_p1.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

using namespace std;
int main() {
    string c1 = "blue", c2 = "green", n1 = "H1", n2 = "H2";
    Hexagon h1 = Hexagon(n1, 1, 1, 6, 9, c1);
    Hexagon h2 = Hexagon(n2, 1, 1, 6, 15, c2);
    Hexagon h3 = Hexagon( h2);
    cout<<"Perimeter 1 = "<<h1.perimeter()<<endl;
    cout<<"Area 1 = "<<h1.area()<<endl;
    cout<<"Perimeter 2 = "<<h2.perimeter()<<endl;
    cout<<"Area 2 = "<<h2.area()<<endl;
    cout<<"Perimeter 3 = "<<h3.perimeter()<<endl;
    cout<<"Area 3 = "<<h3.area()<<endl;

}