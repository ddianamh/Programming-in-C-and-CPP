/*
CH-230-A
a4_p3.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h> 
#include <math.h> 

float geometric_mean(float arr[], int num)
{
    float p;
    p = 1 / ((float) num);
    float gm = 1;
    for( int i = 1; i <= num; i++ )
    {
        gm = gm * arr[i];
        //calculating the product
    }
    gm = pow(gm, p);
    //formula for geometric mean
    //used the pow() function to raise gm to power p=1/num
    return gm;
    //returning gm
}

float highest(float arr[], int num)
{
    float maxx;
    maxx = -1;
    for( int i = 1; i <= num; i++ )
    {
        if( arr[i] > maxx )
            maxx = arr[i];
            //if maxx is smaller, maxx gets the current value
    }
    return maxx;
}

float lowest(float arr[], int num)
{
    float minn;
    minn = __FLT_MAX__;
    for( int i = 1; i <= num; i++ )
    {
        if( arr[i] < minn )
            minn = arr[i];
            //if minn is bigger, minn gets the current elem
    }
    return minn;
}

float sum(float arr[], int num)
{
    float s = 0;
    for( int i = 1; i <= num; i++ )
    {
        s = s + arr[i];
        //adds current element to the sum s
    }
    return s;
}

int main()
{
    float a[16], x;
    int n = 1;
    //my array starts from 1
    while( scanf("%f", &x) )
    {
        //reads x and add it to the array if positive
        if( x >= 0 )
        {
            a[n] = x;
            n++;
        }
        else
            break;
        //if x negative, it ends the reading while() loop
    }
    n--;
    //n--; because we increased n one extra time

    char c;
    getchar();
    //skips the enter from the input to read c
    scanf("%c", &c);
    switch( c )
    {
        case 'm':
            printf("geometric mean: %f\n", geometric_mean(a, n) );
            break;
        case 'h':
            printf("highest number: %f\n", highest(a, n) );
            break;
        case 'l':
            printf("smallest number: %f\n", lowest(a, n) );
            break;
        case 's':
            printf("sum: %f\n", sum(a, n) );
            break;
        default:
            printf("try another character");
    }
    return 0;
}