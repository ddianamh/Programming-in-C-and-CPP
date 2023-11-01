/*
CH-230-A
a5_p10.c 
Diana Harambas
dharambas@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

void count_down( int n )
{
    if( n == 1 )
    {
        printf("%d.", n);
        //the last case / base case
    }
    else
    {
        printf("%d,", n);
        //printing current value
        count_down( n-1 ); 
        //going downwards
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    count_down( n );
    printf("\n");
    //to look nice
    return 0;
}