/*
CH-230-A
a3_p1.c 
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    float x;
    int n;
    scanf("%f\n", &x);
    scanf("%d", &n);
    //i need n>0 in order to be valid
    //while() reads n until i get a valid value
    while( n <= 0 )
    {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    //i to use in a for() loop
    for( int i = 1; i <= n; i++ )
    {
        printf("%f\n", x);
    }
    return 0;
}