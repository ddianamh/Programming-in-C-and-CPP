/*
CH-230-A
a3_p6.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

float to_pounds ( int kg, int g )
{
    //1kg = 1000g
    //1kg = 2.2 pounds
    //1g = 2.2/1000 pounds
    float p;
    p = ((float) kg )* 2.2 + (((float) g ) / 1000 ) * 2.2;
    return p;
}
int main() 
{
    int kg, g;
    float p;
    scanf( "%d", &kg);
    scanf( "%d", &g);
    p = to_pounds( kg, g);
    printf("Result of conversion: %f\n", p);
    return 0;
}