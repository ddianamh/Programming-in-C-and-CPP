/*
CH-230-A
a6_p1.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>

//A,B variables, TYPE the data type
//including aux as temporary variable to help swap A, B 
#define SWAPPING( A, B, TYPE ) {TYPE aux; aux = A; A = B; B = aux;} 
int main()
{
    int a, b;
    double x, y;
    //reading
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &x);
    scanf("%lf", &y);
    //swapping
    SWAPPING(a, b, int);
    SWAPPING(x, y, double);
    //printing
    printf("After swapping:\n%d\n%d\n%.6lf\n%.6lf\n", a, b, x, y);
    return 0;
}