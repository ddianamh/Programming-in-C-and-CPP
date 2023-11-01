/*
CH-230-A
a6_p2.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>

//C = the unsigned char variable
//the least significant bit actually gives the parity 
//if we use & and use 1 as the second expression
//LSBIT will give 1 if the last bit is 1
//and 0 if it is NOT one
#define LSBIT( C ) (C & 1)
int main()
{
    unsigned char C;
    scanf("%c", &C);
    printf("The decimal representation is: %d\n", (int) C );
    printf("The least significant bit is: %d\n", LSBIT( C ));
    return 0;
}