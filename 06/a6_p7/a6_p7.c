/*
CH-230-A
a6_p7.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>   

void print_binary( unsigned char c )
{
    int i = 7;
    unsigned char mask;
    //prints only 8 digits in binary repr of an unsigned char
    while( i >= 0 )
    {
        //shifts 1 in mask i positions
        mask = 1 << i;
        if( c & mask )
            printf("1");
        else
            printf("0");
        i--;
    }
    printf("\n");
}

void set3bits( unsigned char *c, int b1, int b2, int b3)
{
    unsigned char mask;
    mask = pow(2, b1);
    //if c has 0 in the specific mask position, put bit 1 there
    if( !((*c) & mask) )
    {
        *c = *c + mask;
    }
    mask = pow(2, b2);
    if( !((*c) & mask) )
    {
        *c = *c + mask;
    }
    mask = pow(2, b3);
    if( !((*c) & mask) )
    {
        *c = *c + mask;
    }
}

int main()
{
    unsigned char c;
    int b1, b2, b3;
    //reading
    scanf("%c", &c);
    scanf("%d", &b1);
    scanf("%d", &b2);
    scanf("%d", &b3);

    //printing decimal representation
    printf("The decimal representation is: %d\n", (int) c);

    //printing binary representation by calling function
    printf("The binary representation is: ");
    print_binary( c );

    //printing binary representation by calling printing function
    //after calling set3bits function that changes c
    printf("After setting the bits: ");
    set3bits(&c, b1, b2, b3);
    print_binary( c );

    return 0;
}