/*
CH-230-A
a7_p1.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#ifndef _LIST_H
#define _LIST_H
struct list 
{
    int info;
    struct list *next;
};

struct list* push_front( struct list *my_list, int value );

struct list* push_back( struct list *my_list, int value );

struct list* remove_front( struct list *my_list );

void print_list( struct list* my_list );

void free_list( struct list* my_list );

#endif
