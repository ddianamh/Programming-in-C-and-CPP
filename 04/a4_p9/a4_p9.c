/*
CH-230-A
a4_p9.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int prodminmax(int arr[], int n)
{
    int minn, maxx;
    minn = INT_MAX;
    maxx = INT_MIN;
    //initializing minn, maxx with the maximal and minimal values
    //so that we make sure they are modified
    for( int i = 1; i <= n; i++ )
    {
        if( minn > arr[i] )
            minn = arr[i];
            //for the minimum
        if( maxx < arr[i] )
            maxx = arr[i];
            //for the maximum
    }
    int p;
    p = minn * maxx;
    return p;
}


int main()
{
    int *arr;
    int n;
    scanf("%d", &n);
    //using malloc() for dynamic allocation
    arr = (int*) malloc(sizeof(int) * n);

    for( int i = 1; i <= n; i++ )
    {
        scanf("%d", &arr[i]);
        //reading the i'th element
    }
    
    int p;
    p = prodminmax(arr, n);
    //calling function

    printf("Wanted product = %d\n", p);

    //deallocating with free()
    free( arr );
    return 0;
}