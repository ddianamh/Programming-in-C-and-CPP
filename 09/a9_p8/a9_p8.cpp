/*
CH-230-A
a9_p8.cpp
Diana Harambas
dharambas@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

void subtract_max(int *a, int n)
{
    //finding the maximum
    //init maxx with smallest possible int
    //included <climits> to have INT_MIN
    int maxx = INT_MIN;
    for( int i = 0; i < n; i++ )
    {
        if( maxx < a[i] )
            maxx = a[i];
    }
    //subtracting maxx from all elements
    for( int i = 0; i < n; i++ )
    {
        a[i] = a[i] - maxx;
    }
}

//deleting a
void deallocate(int *a)
{
    delete a;
}

int main()
{
    int n;
    cin >> n;
    //allocating memory
    int* arr = new int[n];
    
    if( arr == NULL )
    {
        cout << "Error in allocating memory\n";
        return -1;
    }

    //reading array
    for( int i = 0; i < n; i++ )
    {
        cin >> arr[i];
    }

    //printing original array so we can see the differences after
    //this is optional, but it's easier 
    //to check the effect of the function
    cout << "Original array:\n";
    for( int i = 0; i < n; i++ )        
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //calling first function
    subtract_max(arr, n);

    //printing changed array
    cout << "Changed array:\n";
    for( int i = 0; i < n; i++ )        
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //deallocation
    deallocate(arr);

    return 0;
}
