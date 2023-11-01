/*
CH-230-A
a6_p5.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>   
int main()
{
    unsigned char c, mask;
    scanf("%c", &c);
    printf("The decimal representation is: %d\n", (int) c);
    int pwr = 1;
    //if 2^{pwr-1} < c < 2^{pwr} means that c has pwr bits in the binary repr
    //finding the number of bits by comparing with powers of 2
    while( pow(2, pwr - 1) < (int) c )
    {
        pwr++;
    }
    //pwr was increased an extra time, so must be decreased by 1
    pwr--;
    mask = 1;
    printf("The backwards binary representation is: ");
    for( int i = 0; i < pwr; i++ )
    {
       //getting the last bit by & with the mask and printing it
       printf("%d", c & mask);
       //shifting to the right to get to the next bit (right-left reading)
       c = c >> 1;
    }
    printf("\n");
    return 0;
}