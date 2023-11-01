/*
CH-230-A
a11_p1.cpp
Diana Harambas
dharambas@jacobs-university.de
*/

#include <iostream>
#include "Box.h"
using namespace std;

int main()
{
    int n;
    cout << "Enter number of boxes: ";
    cin >> n;

    //dynamically creating an array of 2*n boxes
    Box *arr = new Box[2*n];

    double h, w, d;
    //read height, width, depth for the first n boxes 
    for( int i = 0; i < n; i++ )
    {
        cout << "\nBox number " << i << ": ";
        cout << "\nheight = ";
        cin >> h;

        cout << "width = ";
        cin >> w;

        cout << "depth = ";
        cin >> d;

        arr[i] = Box(h, w, d);
    }

    //making the copies
    for( int i = n; i < 2*n; i++ )
    {
        arr[i] = Box(arr[i-n]);
    }

    //looping across all boxes for calculating the volume
    for( int i = 0; i < 2*n; i++ )
    {
        cout << "Volume of box number " << i <<" = ";
        double volume;
        volume = arr[i].getHeight() * arr[i].getWidth() * arr[i].getDepth();
        cout << volume << endl;
    }

    //deallocating memory
    delete [] arr;

    return 0;

}