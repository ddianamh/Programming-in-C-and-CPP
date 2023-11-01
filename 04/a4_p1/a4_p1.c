/*
CH-230-A
a4_p1.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h> 
#include <math.h>
//math.h to use M_PI which is defined as pi
int main()
{
    float lower, upper, step;
    scanf("%f", &lower);
    scanf("%f", &upper);
    scanf("%f", &step);
    
    //starting for() from x = lower and adding the step everytime
    //until we reach the upper limit
    
    for( float x = lower; x <= upper; x = x + step )
    {
        //area = pi*r^2, perimeter = 2*pi*r
        //for circle with radius r
        printf("%f %f %f\n", x, x * x * M_PI, 2 * M_PI * x);
    } 
    return 0;
}
