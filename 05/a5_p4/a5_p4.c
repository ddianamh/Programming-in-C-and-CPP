/*
CH-230-A
a5_p4.c 
Diana Harambas
dharambas@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
void divby5 (float arr[], int size )
{
    for( int i = 0; i < size; i++ )
    {
        arr[i] = arr[i] / 5;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    //dynamically allocating the array
    float *arr;
    arr = (float *) malloc( sizeof( float ) * n);
    for( int i = 0; i < n; i++ )
    {
        //reading the element on position i
        scanf("%f", arr + i);
    }

    printf("Before:\n");
    //specifying .3 precision
    for( int i = 0; i < n; i++ )
    {
        //printing the value of the element on position i
        printf("%.3f ", *(arr + i));
    }
    printf("\nAfter:\n");
    //calling the function that changes the array
    divby5( arr, n);
    for( int i = 0; i < n; i++ )
    {
        printf("%.3f ", *(arr + i));
    }
    printf("\n");
    //deallocating
    free( arr );
    return 0;
}