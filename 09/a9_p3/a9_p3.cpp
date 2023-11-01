/*
CH-230-A
a9_p3.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
using namespace std;
//naming it abss because
float abss(float x)
{
    if( x >= 0 )
        return x;
    else
        return -x;
}

int main()
{
    float x;
    //reading float
    cin >> x;
    //printing absolute value
    cout << abss(x) << endl;
    return 0;
}
