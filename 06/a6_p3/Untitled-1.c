/*
CH-230-A
a6_p4.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE    
int main()
{
    int n;
    scanf("%d", &n);
    //dynamically allocating memory for x and y
    int *x, *y;
    x = (int *) malloc( sizeof( int ) * n );
    y = (int *) malloc( sizeof( int ) * n );
    //reading
    for( int i = 0 ; i < n; i++ )
    {
        //indexing the vector from 0 so we can use pointers
        //reading i'th position
        scanf("%d", x + i);
    }
    for( int i = 0 ; i < n; i++ )
    {
        scanf("%d", y + i);
    }
    int scalar_product, p;
    scalar_product = 0;
    //conditional compilation for showing intermediate results
    #if defined( INTERMEDIATE )
    {
        printf("The intermediate product values are: \n")
        for( int i = 0; i < n; i++ )
        {
            //current intermediate product value
            p = (*(x + i)) * (*(y + i));
            printf("%d\n", p);
            //adding it to the scalar product
            scalar_product += p;
        }
    }
    #endif
    printf("The scalar product is: %d\n", scalar_product);
    return 0;
}