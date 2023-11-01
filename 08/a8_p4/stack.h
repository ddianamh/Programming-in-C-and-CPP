/*
CH-230-A
a8_p4.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/

/**
 * @file stack.h
 */

#ifndef _STACK_H_
#define _STACK_H_

struct stack
{
    unsigned int count;
    int array[32];
    //array up to 32 because integers can get up to 2^32
};

//will use push, pushbinary, printreverse
void push(struct stack *, unsigned int);
void pushbinary(struct stack *, unsigned int);
void printstack( struct stack * );
void printreverse( struct stack *stack );
void pop(struct stack *);
void empty(struct stack *);
int isEmpty(struct stack *);

#endif