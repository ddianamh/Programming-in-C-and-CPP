/*
CH-230-A
a4_p1.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h> 
int main()
{
    float x, upper, step;
    scanf("%f", x);
    scanf("%f", upper);
    scanf("%f", step);
    //area = pi*r^2, perimeter = 2*pi*r
    //for circle with radius r
    float area, perimeter;
    //starting for() from x and adding the step everytime
    //until we reach the upper limit
    for( x; x <= upper; x = x + step )
    {
        area = 3.14 * x * x;
        perimeter = 2 * 3.14 * x;
        printf("%f %f %f\n", x, area, perimeter);
    }
    return 0;
}
