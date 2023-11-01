/*
CH-230-A
a11_p3.cpp
Diana Harambas 
dharambas@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Creature.h"
using namespace std;

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Unicorn.\n";
    Unicorn u;
    u.run();
    u.time();

    cout << "\nCreating a Mermaid.\n";
    //this is a better, improved mermaid that can *run*
    Mermaid m = Mermaid();
    m.run();
    m.weightloss();
    
    cout << endl;
    return 0;
} 