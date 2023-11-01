/*
CH-230-A
a11_p4.cpp
Diana Harambas 
dharambas@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include "Creature.h"
using namespace std;

int main()
{ 
    string str;
    cin >> str;
    cin.get();

    while( 1 )
    {
        switch str:
            case "wizard":
                Wizard *w;
                w = new Wizard;
                w.run();
                w.hover();
                
                break;
            case "object1":
                break;
            case "object2":
                break;
            case "quit":
                cout << "Program is ending!\n";
                return 1;
                break;
            case default:
                cout << "Enter valid input\n";
        
        cin >> str;
        cin.get();
    }
    
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

    cout << "\nCreating a default Mermaid.\n";
    Mermaid m1 = Mermaid();
    m1.run();
    m1.newweight();

    cout << "\nCreating another Mermaid.\n";
    Mermaid m2 = Mermaid( 70 );
    m2.run();
    m2.newweight();

    cout << endl;
    return 0;
} 