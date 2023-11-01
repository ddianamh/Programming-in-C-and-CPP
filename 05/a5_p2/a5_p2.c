/*
CH-230-A
a5_p2.c 
Diana Harambas
dharambas@jacobs-university.de
 */
#include <stdio.h>

void divby5 (float arr[], int size )
{
    for( int i = 0; i < size; i++ )
    {
        arr[i] = arr[i] / 5;
    }
}

int main()
{
    float arr[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    printf("Before:\n");
    //specifying .3 precision
    for( int i = 0; i < 6; i++ )
    {
        printf("%.3f ", arr[i]);
    }
    printf("\nAfter:\n");
    //calling the function that changes the array
    divby5( arr, 6);
    for( int i = 0; i < 6; i++ )
    {
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    return 0;
}