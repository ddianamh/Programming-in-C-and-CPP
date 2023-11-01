/*
CH-230-A
a5_p11.c 
Diana Harambas
dharambas@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

int prime ( int x, int d )
{
    //if x=1 then not prime
    if( x == 1 )
        return 0;
    //if it doesn't find any divisors until x/2+1 then x prime
    if( d == x / 2 + 1 )
        return 1;
    else
    {
        //if x divisible by d then not prime
        //else see what happens for greater d
        if( x % d == 0 )
            return 0;
        else
            return prime(x, ++d);
    }    

}

int main()
{
    int x;
    scanf("%d", &x);
    int yes;
    yes = prime( x, 2 );
    if( yes == 0)
        printf("%d is not prime\n", x);
    else
        printf("%d is prime\n", x);
    return 0;
}