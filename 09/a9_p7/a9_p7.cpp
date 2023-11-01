/*
CH-230-A
a9_p7.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>

using namespace std;

//swap ints using reference
void swapping( int &a, int &b )
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}

//swap floats using reference
void swapping( float &x, float &y )
{
    float aux;
    aux = x;
    x = y;
    y = aux;
}

//swap char pointers using reference
void swapping( const char *&str1, const char *&str2)
{
    const char *aux;
    aux = str1;
    str1 = str2;
    str2 = aux;
}

int main(void)
{
    int a = 7, b = 15;
    float x = 3.5, y = 9.2; 
    const char *str1 = "One"; 
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}
