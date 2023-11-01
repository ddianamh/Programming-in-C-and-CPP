/*
CH-230-A
a9_p5.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int number;
    int tries = 0;
    int randomNumber;
    int guess;
    //the name of the player
    char name[100];
    cout << "What is your name?\n";
    cin.getline(name, 100);
    //init random number generator
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand();
    //number between 1 and 100
    number = randomNumber % 100 + 1;
    //guessing
    while( 1 )
    {
        cout << name << ", please make a guess: ";
        cin >> guess;
        tries++;
        //if equal, congratulating and ending loop
        if( guess == number )
        {
            cout << "Congratulations! You guessed the number in ";
            cout << tries << " tries.\n";
            break;
        }
        //if lower or upper
        else
        {
            if( guess < number )
                cout << "Too low!\n";
            else
                cout << "Too high!\n";
        }
           
    }
    return 0;
}
