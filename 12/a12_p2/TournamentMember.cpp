/*
CH-230-A
a12_p2.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include "TournamentMember.h"
using namespace std;
//empty constructor
TournamentMember::TournamentMember()
{
    cout << "Default constructor called\n";
    strcpy(firstName, "first_name");
    strcpy(lastName, "last_name");
    strcpy(birth, "0000-00-00");
    role = "default_role";
    salary = 0;
    height = 0;
}
//copy constructor
TournamentMember::TournamentMember( const TournamentMember& src)
{
    cout << "Copy constructor called\n";
    strcpy(firstName, src.firstName);
    strcpy(lastName, src.lastName);
    strcpy(birth, src.birth);
    role = src.role;
    salary = src.salary;
    height = src.height;
}
//parameter constructor
TournamentMember::TournamentMember( char f[], char l[], char b[], 
                                    string r, int s, double h )
{
    cout << "Parameter constructor called\n";
    strcpy(firstName, f);
    strcpy(lastName, l);
    strcpy(birth, b);
    role = r;
    salary = s;
    height = h;
}
//destructor
TournamentMember::~TournamentMember()
{
    cout << "Destructor called\n";
}
//print method
void TournamentMember::print()
{
    cout << "\nThis tournament member is named ";
    cout << firstName << " " << lastName <<" and was born on ";
    cout << birth << ". The role is " << role << ", the salary is ";
    cout << salary << " and the height of the member is " << height;
    cout << ". The tournament takes place in " << location << ".\n";
    cout << endl;
}
//setting the static location
string TournamentMember::location = "New York City";

//change location
void TournamentMember::changeLocation( string loc )
{
    cout << "\nLocation change!\n";
    location = loc;
}

