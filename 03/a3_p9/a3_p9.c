/*
CH-230-A
a3_p9.c 
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
double sum25(double v[], int n)
{
    double s;
    if( n < 6 )
        return -111;
    //returning -111 when there are less than 6 elem in v[]
    //so when position 5 (6th elem) doesn't exist
    s = v[2] + v[5];
    //the array will start the numbering from 0
    return s;
    //in case the function goes further than the first if()
    //it will return the sum s
}

int main()
{
    int n;
    scanf("%d", &n);
    double v[20];
    for( int i = 0; i < n; i++ )
    {
        scanf("%lf", &v[i]);
    }
    double result;
    result = sum25( v, n );
    if( result == -111 ) //printing message if invalid
        printf("One or both positions are invalid\n");
    else //printing sum if valid
        printf("sum=%lf\n", result);
    return 0;
}