/*
CH-230-A
a9_p6.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cstring>

using namespace std;
//function for array of ints
int myfirst( int a[], int n )
{
    bool found = 0;
    int first;
    //goes through the array until the end or when
    //the first positive (strictly greater than 0)
    //and even number is found
    for( int i = 1; found == 0 && i <= n; i++ )
    {
        if( a[i] > 0 && a[i] % 2 == 0 )
        {
            first = a[i];
            found = 1;
        }
    }
    if( found == 0 )
        return -1;
    else
        return first;
} 
//function for array of doubles
double myfirst( double a[], int n )
{
    bool found = 0;
    double first;
    //goes through the array until the end or when
    //the first negative (strictly smaller than 0)
    //and doesnt have a fractional part
    for( int i = 1; found == 0 && i <= n; i++ )
    {
        //no fractional part means it is equal to its whole part
        if( a[i] < 0 && (a[i] - (int)a[i]) == 0 )
        {
            first = a[i];
            found = 1;
        }
    }
    if( found == 0 )
        return -1.1;
    else
        return first;
}
//function for array of chars
char myfirst( char a[] )
{
    bool found = 0;
    char first;
    char vowels[] = "aeiouAEIOU";
    int length = strlen(a);
    for( int i = 0; found == 0 && i < length; i++ )
    {
        //consonant is a letter which is not a vowel
        if( isalpha(a[i]) && strchr( vowels, a[i]) == NULL )
        {
            first = a[i];
            found = 1;
        }
    }
    if( found == 0 )
        return '0';
    else
        return first;
}
int main()
{
    int n, m, a[100];
    double b[100];
    char c[100];
    //for ints
    cin >> n;
    for( int i = 1; i <= n; i++ )
    {
        cin >> a[i];
    }
    cout << myfirst(a, n) << endl;
    //for doubles
    cin >> m;
    for( int i = 1; i <= m; i++ )
    {
        cin >> b[i];
    }
    cout << myfirst(b, m) << endl;
    //for chars
    cin.get();
    cin.getline(c, 100);
    cout << myfirst(c) << endl;
    return 0;
}
