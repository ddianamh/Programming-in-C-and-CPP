/*
CH-230-A
a5_p5.c 
Diana Harambas
dharambas@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

double scalar_product(double *v, double *w, int n)
{
    double p = 0;
    for( int i = 0; i < n; i++ )
    {
        p = p + (*(v+i)) * (*(w+i));
    }
    return p;
}

void smallest(double *v, int n)
{
    double s;
    s = *v;
    int pos = 0;
    //initializing with the first element of the vector
    //going through the vector to compare and find the min
    for( int i = 0; i < n; i++ )
    {
        if( s > *(v+i) )
        {
            s = *(v+i);
            pos = i;
            //saving the current minimum's position
        }
            
    }
    printf("The smallest = %lf\n", s);
    printf("Position of smallest = %d\n", pos);
}

void largest(double *v, int n)
{
    double l;
    int pos = 0;
    l = *v;
    //initializing with the first element of the vector
    //going through the vector to compare and find the max
    for( int i = 0; i < n; i++ )
    {
        if( l < *(v+i) )
        {
            l = *(v+i);
            pos = i;
            //saving the current maximum's position
        }     
    }
    printf("The largest = %lf\n", l);
    printf("Position of largest = %d\n", pos);
}

int main()
{
    int n;
    scanf("%d", &n);
    //dynamically allocating memory for v and w
    double *v, *w;
    v = (double *) malloc( sizeof(double) * n );
    w = (double *) malloc( sizeof(double) * n );
    int i = 0;
    while( i < n )
    {
        scanf("%lf", v + i);
        //reading a double to put it in position i in vector v
        i++;
    }
    i = 0; 
    while( i < n )
    {
        scanf("%lf", w + i);
        //reading a double to put it in position i in vector w
        i++;
    }
    double p;
    p = scalar_product(v,w,n);
    printf("Scalar product=%lf\n", p);
    //calling functions for v
    smallest(v,n);
    largest(v,n);
    //calling functions for w
    smallest(w,n);
    largest(w,n);
    //deallocating
    free(v);
    free(w);
    return 0;
}