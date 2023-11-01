/*
CH-230-A
a7_p7.c  
Diana Harambas
dharambas@jacobs-university.de
*/

struct stack
{
    unsigned int count;
    int array[12];
};

void push(struct stack *, int);
void pop(struct stack *);
void empty(struct stack *);
int isEmpty(struct stack *);