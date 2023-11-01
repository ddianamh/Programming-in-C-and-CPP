/*
CH-230-A
a7_p7.c  
Diana Harambas
dharambas@jacobs-university.de
*/

//including the header
#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

void push( struct stack *stack, int value )
{   //checking if there is stack overflow
    printf("Pushing ");
    if (stack->count == 12)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {
        //adding new value into the array
        stack->count = stack->count + 1;
        stack->array[ stack->count ] = value;
        printf("%d\n", value ); 
    } 
}

int isEmpty( struct stack *stack ) 
{
    if( stack->count == 0 )
      return 1;
    else
      return 0;
}

void pop( struct stack *stack )
{
    printf("Popping ");
    //checking the special case
    if( isEmpty( stack ) )
        printf("Stack Underflow\n");
    else
    {
        //printing what is popped and making count smaller
        printf("%d\n", stack->array[ stack->count ]);
        stack->count--;
    }
}

void empty( struct stack *stack )
{
    printf("Emptying Stack ");
    while( !isEmpty( stack ) )
    {
        printf("%d ", stack->array[ stack->count ]);
        stack->count--;
    }
    printf("\n");
}


