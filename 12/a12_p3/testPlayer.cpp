/*
CH-230-A
a12_p3.cpp
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
    
    //default player
    Player a = Player();
    a.pprint();

    //player with parameters
    strcpy(f1, "Nicolae");
    strcpy(l1, "Guta");
    strcpy(b1, "1970-10-10");
    Player b = Player(f1, l1, b1, "player", 15623, 1.73, 1, "defender", 0, 0);
    b.pprint();

    //copy of that player
    cout <<"\n Incrementing goals test: \n \n";
    Player c = Player( b );
    //testing the incrementing goals function by adding 3 goals to the copy
    c.incrementGoals();
    c.incrementGoals();
    c.incrementGoals();
    c.pprint();

    
    //new player with parameters with new static location
    strcpy(f2, "Dan");
    strcpy(l2, "Danes");
    strcpy(b2, "2000-12-05");
    Player d = Player(f2, l2, b2, "player", 2500, 1.8, 2, "captain", 2, 1);
    //changing location
    d.changeLocation("Hamburg");
    d.pprint();
    
    //new default player to check if new location is still preserved
    Player e = Player();
    e.incrementGoals();
    e.pprint();

    //printing all players again to see if the location was changed for all
    cout << "\nNew location test:\n\n";
    a.pprint();
    b.pprint();
    c.pprint();
    d.pprint();
    e.pprint();

    return 0;
}