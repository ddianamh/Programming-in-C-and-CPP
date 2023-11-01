/*
CH-230-A
a2_p3.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int weeks, days, hours;
    //reading the integers 
    scanf("%d", &weeks);
    scanf("%d", &days);
    scanf("%d", &hours);
    //1 day = 24h
    //1 week = 7*24h = 168h
    int total;
    //adding everything in hours
    total = hours + 24*days + 168*weeks;
    printf("total number of hours: %d\n", total);
    return 0;
}