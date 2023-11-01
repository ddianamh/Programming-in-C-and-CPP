/*
CH-230-A
a7_p1.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
#include "linked_list.h"  

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