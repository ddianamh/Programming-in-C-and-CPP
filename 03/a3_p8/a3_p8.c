/*
CH-230-A
a3_p8.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

float sum (float a[], int n)
{
    float sum = 0;
    for( int i = 1; i <= n; i++ ) 
    {
        sum = sum + a[i];
        //adding current element
    }
    return sum;
}

float avg (float a[], int n)
{
    float s;
    s = sum (a, n);
    //the sum function was previously defined
    //so we can call it in this function
    float avg;
    avg =  s / ( (float) n );
    return avg;
}

int main()
{
    float a[10], x;
    int n;
    n = 1; //started the count from 1
    while( scanf("%f", &x) )//reading x already
    {
        if( x != -99.0 )
        {
            a[n] = x;
            n++;
            //if the current read number is not -99.0
            //then we can add it to our array
        }
        else
            break; //breaking the loop
    }
    n--;
    //we need n--; because we raised it one extra time
    float s, av;
    //calling the functions and printing the results
    s = sum(a, n);
    av = avg(a, n);
    printf("sum = %f\naverage = %f\n", s, av);

}