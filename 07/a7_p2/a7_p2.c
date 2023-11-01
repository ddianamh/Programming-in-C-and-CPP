/*
CH-230-A
a7_p2.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>   

struct dlist 
{
    char info;
    struct dlist *prev;
    struct dlist *next;
};

//inserting element at the BEGINNING
struct dlist* push_front( struct dlist *my_list, char value )
{
    struct dlist *newel;
    newel = (struct dlist *) malloc( sizeof(struct dlist));
    if( newel == NULL )
    {
        printf("Error allocating memory\n");
        return my_list;
    }

    newel->info = value;

    if( my_list == NULL )
    {
        newel->next = NULL;
        newel->prev = NULL;
    }
    else
    {
        newel->next = my_list;
        newel->prev = NULL;
        my_list->prev = newel;
    }
    return newel;
} 


//removing all occurences of char c
struct dlist* remove_elements( struct dlist *my_list, char c )
{
    //in case the list is empty it returns itself
    if( my_list == NULL )
        return my_list;

    //else:
    struct dlist *cursor, *temporary;
    cursor = my_list;
    
    //need to keep track if we delete something or not
    int deleted = 0;
    while( cursor != NULL )
    {
        if( cursor->info == c )
        {
            //finds a character match
            deleted = 1;

            temporary = cursor;
            
            //if cursor = the first element
            //then there is no previous element
            if( cursor == my_list )
            {
                if( cursor->next != NULL )
                {
                    //if there is a next element
                    //move cursor to the next
                    //set new cursor->prev to NULL
                    //get my_list to the cursor position
                    //free current temporary which has info = c
                    cursor = cursor->next;
                    cursor->prev = NULL;
                    my_list = cursor;
                    free(temporary); 
                }
                else
                {
                    //my_list has only current element which is freed
                    //so list becomes NULL and can be returned already
                    free(temporary);
                    my_list = NULL;
                    return my_list;
                }
            }
            //else cursor is not the first element so there is a previous one
            else 
            {
                if( cursor->next != NULL )
                {
                    //if there is a next element
                    //move cursor to the next element
                    //new cursor->prev = element previous to temporary
                    //temporary->prev gets next = the cursor
                    //free current temporary which has info = c
                    cursor = cursor->next;
                    cursor->prev = temporary->prev;
                    (temporary->prev)->next = cursor; 
                    free(temporary); 
                }
                else
                {
                    //cursor is on the last element so there is no next
                    //previous element gets next = NULL
                    //cursor becomes NULL
                    //freeing temporary
                    (cursor->prev)->next = NULL;
                    cursor = NULL;
                    free(temporary);
                }
            }
        }
        //if cursor->info is not a match
        else
        {
            cursor = cursor->next;
        }
    }

    //printing message if no elements were deleted
    if( deleted == 0 )
        printf("The element is not in the list!\n");

    //returning the list
    return my_list;
} 

//printing list
void print_list( struct dlist* my_list )
{
    struct dlist *p;
    for( p = my_list; p; p = p->next )
    {
        printf("%c ", p->info );
    }
    printf("\n");
}

//printing backwards
void print_backwards( struct dlist* my_list )
{
    
    struct dlist *p, *cursor;
    cursor = my_list;
    //going with cursor until the last element
    while( cursor->next != NULL )
    {
       cursor = cursor->next;
    }
    //going with p from the last element to the first
    for( p = cursor; p; p = p->prev )
    {
        printf("%c ", p->info );
    }
    printf("\n");
}

//freeing the list
void free_list( struct dlist* my_list )
{
    struct dlist *next_elem;
    while( my_list != NULL )
    {
        next_elem = my_list->next;
        free( my_list );
        my_list = next_elem;
    }
}


int main()
{
    struct dlist *my_list = NULL;
    char c;
    int x;
    //x = random number to enter the while() which stops when 5 is read
    x = 0; 
    while( x != 5 )
    {
        //reading every x
        scanf("%d", &x);
        switch (x)
        {
            case 1:
                //reading char value
                //adding it to the beginning
                scanf("\n%c", &c);
                my_list = push_front( my_list, c );
                break;
            case 2:
                //reading char value
                //removing all occurrences
                scanf("\n%c", &c);
                my_list = remove_elements( my_list, c );
                break;
            case 3:
                //printing
                print_list( my_list );
                break;
            case 4:
                //printing
                print_backwards( my_list );
                break;
            case 5:
                //freeing
                free_list( my_list );
                break;
            default:
                //does nothing if another value is read
                break;
        }
        
    }

    return 0;
}