/*
CH-230-A
a11_p5.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include "Shapes.h"
#include <iostream>
using namespace std;
int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);
  Circle c2("second circle", 1, 1, 1);
  Rectangle rect("RECTANGLE", 3, 8, 10, 20);
  Square s("SQUARE", 5, -2, 6);

  r.printName();
  c.printName();
  cout <<"\nMy task:\n";
  cout << "Perimeter of: ";
  cout << c2.getName() << " is " << c2.perimeter() << endl;
  cout << "Perimeter of: ";
  cout << rect.getName() << " is " << rect.perimeter() << endl;
  cout << "Perimeter of: ";
  cout << s.getName() << " is " << s.perimeter() << endl;

  cout << "\nArea of: ";
  cout << c2.getName() << " is " << c2.area() << endl;
  cout << "Area of: ";
  cout << rect.getName() << " is " << rect.area() << endl;
  cout << "Area of: ";
  cout << s.getName() << " is " << s.area() << endl;

  return 0;

}