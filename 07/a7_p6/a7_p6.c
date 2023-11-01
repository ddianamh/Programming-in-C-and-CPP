/*
CH-230-A
a7_p6.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>   
#include <ctype.h>

struct person 
{
    char name[30];
    int age;
};

void swap_person( struct person *a, struct person *b )
{
    int auxa;
    char auxn[30];
    //swapping both using auxiliar variables
    auxa = a->age;
    strcpy( auxn, a->name );
    a->age = b->age;
    strcpy( a->name, b->name );
    b->age = auxa;
    strcpy( b->name, auxn );
}


int compare_age( const void *va, const void *vb )
{
    //returns 1 if the first int is greater than the second 
    
    const struct person *a = (const struct person *) va;
    const struct person *b = (const struct person *) vb;
    if(a->age < b->age) 
        return -1;
    else
    {
        if (a->age > b->age) 
            return 1;
        else 
            return 0;
    } 
}

int compare_name( const void *va, const void *vb )
{
    //returns 1 if the first string greater than the second
    const struct person * a = (const struct person *) va;
    const struct person * b = (const struct person *) vb;
    if ( strcmp( a->name, b->name ) < 0 ) 
        return -1;
    else
    {
        if ( strcmp( a->name, b->name ) > 0 ) 
            return 1;
        else 
            return 0;
    } 
}

void print_array( struct person *arr, int n)
{
    int i = 0;
    while( i < n )
    {
        printf("{%s, %d}; ", arr[i].name, arr[i].age);
        i++;
    }
    printf("\n");

}

void bubblesort(struct person *arr, int n,
                int (*compare1)( const void *, const void *),
                int (*compare2)( const void *, const void *) )
{
    int swapped;
    do{
        swapped = 0;
        for( int i = 1; i < n; i++ )
        {
            //main comparison criterion: compare1
            if( (*compare1)( (arr+i-1), arr + i) == 1 )
            {
                //swapping if not in order according to criterion 1
                swap_person( (arr+i-1), arr+i );
                swapped = 1;
            }
            else
            {
                if( (*compare1)( (arr+i-1), arr + i) == 0 )
                {
                    //if the elts are equal according to compare1, 
                    //they need to pe compared by criterion 2
                    if( (*compare2)( (arr+i-1), arr + i) == 1 ) 
                    {
                        //swapping if not in order according to criterion 2
                        swap_person( (arr+i-1), arr+i );
                        swapped = 1;
                    }
                }
            }
        }
    }while( swapped );

}



int main()
{
    //reading n 
    int n;
    scanf("%d", &n);
    //allocating memory, checking, reading array
    struct person *arr;
    arr = (struct person *) malloc( sizeof( struct person ) * n);
    if( arr == NULL )
        exit(1);
    for( int i = 0; i < n; i++ )
    {
        getchar();
        //reading name
        fgets( arr[i].name, 30, stdin);
        //fgets keeps the enter char, so we eliminate it
        int len;
        len = strlen( arr[i].name );
        arr[i].name[len - 1] = '\0';
        
        //reading age
        scanf("%d", &arr[i].age );
    }

    //defining 2 function pointers
    int (*func_age)( const void *, const void *);
    int (*func_name)( const void *, const void *);
    func_age = compare_age;
    func_name = compare_name;

    //sorting after name and printing
    bubblesort( arr, n, func_name, func_age );
    print_array( arr, n );

    //sorting after age and printing
    bubblesort( arr, n, func_age, func_name );
    print_array( arr, n );

    free( arr );

    return 0;
}