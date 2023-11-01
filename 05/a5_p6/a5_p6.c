/*
CH-230-A
a5_p6.c 
Diana Harambas
dharambas@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    //dynamically allocating memory for a
    float *a;
    a = (float *) malloc( sizeof(float) * n );
    int i = 0;
    while( i < n )
    {
        scanf("%f", a + i);
        //reading a double to put it in position i in vector v
        i++;
    }
    float *first;
    //first saves the address of the first element in a
    first = a;
    //loop goes until the value of the current element in a is < 0
    while( *a >= 0 )
    {
        //goes to the next element of a
        a++;
    }
    int number;
    number = a - first;
    //address of the first negative element - address of the first element
    if( number == 1)
        printf("Before the first negative value: %d element\n", number);
    else
        printf("Before the first negative value: %d elements\n", number);
    //getting back to the initial full array a so we free it
    a = a - number;
    free(a);
    return 0;
}