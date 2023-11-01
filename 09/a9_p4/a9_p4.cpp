/*
CH-230-A
a9_p4.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <string.h>
using namespace std;
//function for ints
int mycount( int a, int b )
{
    return b-a;
} 
//function for char and string
int mycount( char c, string s )
{
    int number = 0;
    //going through the string character by character
    int length = s.size();
    for( int i = 0; i < length ; i++ )
    {
        if( c == s[i] )
            number++;
    }
    return number;
}
int main()
{
    int a, b;
    char c;
    string s;
    //trying the function for 2 ints
    cin >> a >> b;
    cout << mycount(a, b) << endl;
    //reading enter and then char, enter, string
    //trying the function for char and string
    cin.get();
    cin >> c;
    cin.get();
    getline(cin, s);
    cout << mycount(c, s) << endl;
    return 0;
}
