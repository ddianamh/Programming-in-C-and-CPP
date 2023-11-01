/*
CH-230-A
a11_p4.cpp
Diana Harambas 
dharambas@jacobs-university.de
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Creature.h"
using namespace std;

int main()
{ 
    string str;
    while( 1 )
    {
        cin >> str;
        cin.get();
        if( str == "wizard" )
        {
            cout << "\nCreating a Wizard.\n";
            Wizard *w;
            w = new Wizard;
            w->run();
            w->hover();
            delete w;
            cout << endl;
        }
        else
        {
            if( str == "object1" )
            {
                cout << "\nCreating a Unicorn.\n";
                Unicorn *u;
                u = new Unicorn;
                u->run();
                u->time();
                delete u;
                cout << endl;
            }
            else
            {
                if( str == "object2" )
                {
                    cout << "\nCreating a Mermaid.\n";
                    Mermaid *m;
                    m = new Mermaid;
                    m->run();
                    m->weightloss();
                    delete m;
                    cout << endl;
                }
                else
                {
                    if( str == "quit" )
                    {
                        cout << "Loop is ending, then program is ending!\n";
                        break;
                    }
                    else
                    {
                        cout << "Enter valid input!\n";
                    }
                }
            }
            
        }
            
    }
    cout << endl;
    return 0;
} 