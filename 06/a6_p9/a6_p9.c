/*
CH-230-A
a6_p9.c  
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

//inserting element at POSITION POS
struct list* insert_pos( struct list *my_list, int pos, int value )
{
    //if pos is negative, then it's invalid
    if( pos < 0 )
    {
        printf("Invalid position!\n");
        return my_list;
    }

    struct list *cursor, *newel;
    int current_pos = 0;
    cursor = my_list;
    newel = (struct list *) malloc( sizeof(struct list));

    if( newel == NULL )
    {
        printf("Error allocating memory\n");
        return my_list;
    }

    //if it needs to be added on position 0, i.e. beginning
    //we call push_front 
    if( pos == 0 )
    {
        my_list = push_front(my_list, value);
        return my_list;
    }

    //loop goes with cursor up to the end of the list
    while( cursor->next != NULL )
    {
        if( current_pos + 1== pos )
        {
            newel->info = value;
            //newel->next will get every property of cursor->next
            newel->next = cursor->next;
            //cursor->next becomes newel
            cursor->next = newel;
            return my_list;
        }
        //if not returned, continue going thru the list
        cursor = cursor->next;
        current_pos++;
    }
    //if end of list is reached and no elem is inserted then
    //is pos suggests it should be added at the end, then call push_back
    if( current_pos + 1 == pos )
    {
        my_list = push_back(my_list, value);
        return my_list;
    }
    //else it means that pos is too big, so invalid
    printf("Invalid position!\n");
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

//reversing elements of the list
struct list* reverse( struct list *my_list )
{
    struct list* prev_elem = NULL;
    struct list* curr_elem = my_list;
    struct list* next_elem = NULL;
    //swapping the elements
    while( curr_elem != NULL )
    {
        next_elem = curr_elem->next;
        curr_elem->next = prev_elem;
        prev_elem = curr_elem;
        curr_elem = next_elem;
    }
    my_list = prev_elem;
    return my_list;
} 

int main()
{
    struct list *my_list = NULL;
    char c;
    int x, pos;
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
            case 'i':
                //inserting
                scanf("%d", &pos);
                scanf("%d", &x);
                my_list = insert_pos( my_list, pos, x);
                break;
            case 'R':
                //reversing
                my_list = reverse( my_list );
                break;
            default:
                //does nothing if another char is read
                break;
        }
        
    }

    return 0;
}