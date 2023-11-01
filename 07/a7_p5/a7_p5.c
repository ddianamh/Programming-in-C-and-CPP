/*
CH-230-A
a7_p5.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>   
#include <ctype.h>

void print_array( int *arr, int n)
{
    int i = 0;
    while( i < n )
    {
        printf("%d ", *(arr+i));
        i++;
    }
    printf("\n");

}

int compare_asc( const void *va, const void *vb )
{
    //returns 1 if the first is greater than the second parameter
    const int* a = (const int*) va;
    const int* b = (const int*) vb;
    if (*a < *b) 
        return -1;
    else
    {
        if (*a > *b) 
            return 1;
        else 
            return 0;
    } 
}

int compare_desc( const void *va, const void *vb )
{
    //returns 1 if the second is greater than the first parameter
    const int* a = (const int*) va;
    const int* b = (const int*) vb;
    if (*a > *b) 
        return -1;
    else
    {
        if (*a < *b) 
            return 1;
        else 
            return 0;
    } 
}


void qsort_asc( int *arr, int n )
{
    //calling qsort() with an "ascending condition"
    qsort(arr, n, sizeof( int ), compare_asc);
    //printing sorted array
    print_array( arr, n );
}


void qsort_desc( int *arr, int n )
{
    //calling qsort() with an "descending condition"
    qsort(arr, n, sizeof( int ), compare_desc);
    //printing sorted array
    print_array( arr, n );
}


void end( int *arr, int n )
{
    //deallocating the array memory
    free( arr );
    //exiting program ( we already use exit(1) for bad memory allocation)
    exit(2);
}


int main()
{
    //reading n 
    int n;
    scanf("%d", &n);
    //allocating memory, checking, reading array
    int *arr;
    arr = (int *) malloc( sizeof( int ) * n);
    if( arr == NULL )
        exit(1);
    for( int i = 0; i < n; i++ )
    {
        scanf("%d", arr + i);
    }

    char c;

    //defining the array of function pointers
    void (*fptr[3])(int *array, int number);
    fptr[0] = qsort_asc;
    fptr[1] = qsort_desc;
    fptr[2] = end;
    //qsort_asc on position 0 in the array
    //qsort_desc on position 1 in the array
    //end on position 2 in the array
    
    //infinite loop
    while( 1 )
    {
        //reading character
        scanf("\n%c", &c);
        switch(c)
        {
            case 'a':
                //sorting asc
                (*fptr[0])( arr, n );
                break;
            case 'd':
                //sorting desc
                (*fptr[1])( arr, n );
                break;
            case 'e':
                //quitting execution
                (*fptr[2])( arr, n );
                break;
            default:
                //does nothing if char different than a,d,e is read
                break;
        }
    }

    return 0;
}