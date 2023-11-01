/*
CH-230-A
a9_p9.cpp
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
    //array with 17 words
    const string s[] = {"computer", "television", "keyboard",
                        "laptop", "mouse", "one", "two", "three",
                        "four", "five", "six", "cat", "dog", "cow",
                        "lion", "goat", "bull"};
    int tries = 0;
    string random;
    string modified;
    string guess, answer;
   
    //the game loop (random generator + guessing loop)
    while( 1 )
    {
        //init random number generator
        srand(static_cast<unsigned int>(time(0)));
        int index = rand();
        //index between 0 and 16
        index = index % 17;
        //the random string
        random = s[index];
        //putting _ instead of vowels
        modified = random;
        long unsigned int i = 0;
        while( i < sizeof( modified ) )
        {
            if( strchr("AEIOUaeiou", modified[i]) != NULL )
            {
                modified[i] = '_';
            }
            i++;
        }
        cout << modified << endl;

        tries = 0;
        //guessing 
        while( 1 )
        {
            
            cout <<"Make a guess: ";
            cin >> guess;
            cin.get();
            tries++;
            if( guess == "quit" )
            {
                //breaking the guessing loop
                //need to quit also the game loop after this loop
                break;
            }
            else
            {
                //if the player guesses
                if( guess == random )
                {
                    cout << "Number of tries: " << tries;
                    cout << "\nCongratulations! \n";
                    cout << "Want to play again? Type yes or quit\n";
                    cin >> answer;
                    cin.get();
                    //if answer not "yes" or "quit", give error message
                    while ( answer != "quit" && answer != "yes" )
                    {
                        cout << "Not a valid answer. Type yes or quit.\n";
                        cin >> answer;
                        cin.get();
                    }
                    //breaking the guessing loop 
                    break;
                }
                else
                    cout << "Try again!";
            }
        }
        //checking the answer to know 
        //if we need to generate a new random or not
        //if quit, stop the game, 
        //else answer is yes so continue while loop
        if( answer == "quit" ) 
            break;
        //if the last guess was quit, again stop the game
        if( guess == "quit" ) 
            break;
        
    }
    return 0;
}
