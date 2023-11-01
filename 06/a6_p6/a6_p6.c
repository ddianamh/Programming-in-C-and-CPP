/*
CH-230-A
a6_p6.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>   
int main()
{
    unsigned char c, c_new, mask;
    scanf("%c", &c);
    c_new = 0;
    printf("The decimal representation is: %d\n", (int) c);
    mask = 128;
    //mask = 10000000 in binary
    printf("The binary representation is: ");
    while( mask )
    {
        //getting 0 if c doesn't have 1 on the current mask bit position
        //if it has 1 in that position, it'll give something not zero
        c_new = c & mask;
        if( c_new != 0 )
            printf("1");
        else
            printf("0");
        //right shifting the mask to move to next bit position (left to right)
        mask = mask >> 1;
    }
    printf("\n");
    return 0;
}