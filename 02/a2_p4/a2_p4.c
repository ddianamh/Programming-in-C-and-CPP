/*
CH-230-A
a2_p4.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    float a, b, h;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);
    //math area formulas:
    //square area a^2
    //rectangle area ab
    //triangle area ah/2
    //trapezoid area (a+b)h/2
    printf("square area=%f\n", a*a);
    printf("rectangle area=%f\n", a*b);
    printf("triangle area=%f\n", a*h/2);
    printf("trapezoid area=%f\n", (a+b)*h/2);
    return 0;
}