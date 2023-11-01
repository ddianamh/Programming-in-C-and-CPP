/*
CH-230-A
a8_p4.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include "stack.h"
#include <stdlib.h>
#include <stdio.h>


int main()
{
    //allocating memory for a stack
    struct stack *stack;
    stack = (struct stack *)malloc( sizeof( struct stack ) );
    //checking if malloc() worked
    if (stack == NULL)
        exit(1);
    //starting the count from 0
    stack->count = 0;

    unsigned int x;
    scanf("%u", &x);
    
    //saving the binary (reverse) repr of x in stack
    pushbinary( stack, x);
    printf("The binary representation of %d is ", x);
    //need to print the stack in reverse
    printreverse( stack );
    //deallocating
    free( stack );
    return 0;
}