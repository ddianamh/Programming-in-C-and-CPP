/*
CH-230-A
a7_p1.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>   

struct list 
{
    int info;
    struct list *next;
};

//inserting element at the BEGINNING
struct list* push_front( struct list *my_list, int value )
{
    struct list *newel;
    newel = (struct list *) malloc( sizeof(struct list));
    if( newel == NULL )
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = my_list;
    return newel;
} 

//inserting element at the END
struct list* push_back( struct list *my_list, int value )
{
    struct list *cursor, *newel;
    cursor = my_list;
    newel = (struct list *) malloc( sizeof(struct list));

    if( newel == NULL )
    {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;

    if( my_list == NULL )
        return newel;
    
    while( cursor->next != NULL )
    {
        cursor = cursor->next;
    }
    cursor->next = newel;
    return my_list;
} 

//removing first element
struct list* remove_front( struct list *my_list )
{
    //in case the list is empty it returns itself
    if( my_list == NULL )
        return my_list;

    //else:
    struct list *next_elem;
    next_elem = my_list->next;

    //freeing the memory of the first element
    free( my_list );
    
    my_list = next_elem;
    return my_list;
} 

//printing list
void print_list( struct list* my_list )
{
    struct list *p;
    for( p = my_list; p; p = p->next )
    {
        printf("%d ", p->info );
    }
    printf("\n");
}

//freeing the linked list
void free_list( struct list* my_list )
{
    struct list *next_elem;
    while( my_list != NULL )
    {
        next_elem = my_list->next;
        free( my_list );
        my_list = next_elem;
    }
}


int main()
{
    struct list *my_list = NULL;
    char c;
    int x;
    //c = random character to enter the while() which stops when 'q'is read
    c = ' '; 
    while( c != 'q' )
    {
        //reading every c
        scanf("%c", &c);
        switch (c)
        {
            case 'a':
                //reading integer value
                //adding it to the end
                scanf("%d", &x);
                my_list = push_back( my_list, x );
                break;
            case 'b':
                //reading integer value
                //adding it to the front
                scanf("%d", &x);
                my_list = push_front( my_list, x );
                break;
            case 'r':
                //removing first elem
                my_list = remove_front( my_list );
                break;
            case 'p':
                //printing
                print_list( my_list );
                break;
            case 'q':
                //freeing
                free_list( my_list );
                break;
            default:
                //does nothing if another char is read
                break;
        }
        
    }

    return 0;
}