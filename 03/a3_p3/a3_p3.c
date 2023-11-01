/*
CH-230-A
a3_p3.c 
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>

float convert ( int cm )
{
    float km;
    km = ( (float) cm ) / 100000;
    //1 km = 1000 m = 100000 cm
    //to get a float value we need to do float division
    //so we must do with (float) cm  
    return km;
}

int main()
{
    int cm;
    scanf("%d", &cm);
    float km;
    km =  convert( cm );
    printf("Result of conversion: %f\n", km);
    return 0;
}