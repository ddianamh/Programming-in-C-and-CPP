/*
CH-230-A
a9_p2.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    double x;
    string s;
    //reading n, x
    cin >> n >> x;
    //reading enter
    cin.get();
    //reading string
    cin >> s;
    //while loop up to n
    int i = 1;
    while( i <= n )
    {
        //printing
        cout << s << ":" << x << endl;
        i++;
    }
    
    return 0;
}
