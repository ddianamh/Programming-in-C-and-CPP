/*
CH-230-A
a12_p2.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "TournamentMember.h"
using namespace std;

int main()
{
    char f1[36], f2[36], l1[36], l2[36], b1[11], b2[11];
    
    //default member
    TournamentMember a = TournamentMember();
    a.print();

    //member with parameters
    strcpy(f1, "Nicolae");
    strcpy(l1, "Guta");
    strcpy(b1, "1970-10-10");
    TournamentMember b = TournamentMember(f1, l1, b1, "coach", 15623, 1.73);
    b.print();

    //copy of that member
    TournamentMember c = TournamentMember( b );
    c.print();

    
    //new member with parameters with new static location
    strcpy(f2, "Dan");
    strcpy(l2, "Danes");
    strcpy(b2, "2000-12-05");
    TournamentMember d = TournamentMember(f2, l2, b2, "referee", 2500, 1.8);
    //changing location
    d.changeLocation("Saint Tropez");
    d.print();
    
    //new default member to check if new location is still preserved
    TournamentMember e = TournamentMember();
    e.print();

    return 0;
}