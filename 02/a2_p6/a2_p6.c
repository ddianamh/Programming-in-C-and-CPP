/*
CH-230-A
a2_p6.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);
    double *ptr_one, *ptr_two, *ptr_three;
    //making the pointers point to x,x,y
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    printf("one:%p\ntwo:%p\nthree:%p\n",ptr_one,ptr_two,ptr_three);
    return 0;
}