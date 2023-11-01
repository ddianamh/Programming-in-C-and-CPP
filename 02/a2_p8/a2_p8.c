/*
CH-230-A
a2_p8.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    //a%2 must be 0 in order for a to be even
    //a%7 must be 0 so that a is divisible by 7
    //to be divisible by both i need to check with &&
    if( a % 2 == 0 && a % 7 == 0 )
    {
        printf("The number is divisible by 2 and 7\n");
    }
    else 
    //this means is divisible by none, or
    //by 2 but not by 7 or
    //by 7 but not by 2
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}