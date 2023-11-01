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

int main()
{
    //allocating memory for a stack
    struct stack *stack;
    stack = (struct stack *)malloc( sizeof( struct stack ) );
    if (stack == NULL)
        exit(1);
    //starting the count from 0
    stack->count = 0;
    char c;
    int x;
    //infinite loop
    while(1)
    {
        scanf("%c", &c);
        getchar();
        switch(c)
        {
            case 's':
                //pushing x
                scanf("%d", &x);
                getchar();
                push(stack, x);
                break;
            case 'p':
                //popping top element
                pop( stack );
                break;
            case 'e':
                //emptying the stack
                empty( stack );
                break;
            case 'q':
                //freeing the memory, exitting the program
                printf("Quit\n");
                free( stack );
                exit(2);
        }
    }
    
    return 0;
}