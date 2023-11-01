/*
CH-230-A
a8_p4.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
/**
 * @file stack.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push( struct stack *stack, unsigned int value )
{   //checking if there is stack overflow
    //printf("Pushing ");
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
        //printf("%d\n", value ); 
    } 
}

void pushbinary( struct stack *stack, unsigned int value )
{
    //pushing the first 1/0 from the right
    push( stack, value % 2 );
    value = value / 2;
    //finding the other bits in the binary representation
    //and pushing them
    while( value )
    {
        push( stack, value % 2 );
        value = value / 2;
    }
}

void printstack( struct stack *stack )
{
    for( int i = 1; i <= stack->count; i++ )
    {
        printf("%d", stack->array[i]);
    }
    printf("\n");
}

void printreverse( struct stack *stack )
{
    for( int i = stack->count; i >= 1; i-- )
    {
        printf("%d", stack->array[i]);
    }
    printf(".\n");
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


