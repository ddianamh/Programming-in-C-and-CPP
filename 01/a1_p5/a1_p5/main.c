//
//  main.c
//  a1_p5
//
//  Created by Diana H on 10.09.2022.
//
/*
 CH-230-A
 a1_p5.c
 Diana Harambas
 d.harambas@jacobs-university.de
 */

#include <stdio.h>

int main() {
    int x;
    x = 2138;
    printf("x=%9d\n", x);
    //the %9d means that i print the integer x over 9 places
    float y;
    y = -52.358925;
    printf("y=%11.5f\n", y);
    //the %11.5f means that i print the float y over 11 places
    //with only a floating point precision of 5
    char z;
    z = 'G';
    printf("z=%c\n", z);
    //%c for printing char
    double u;
    u = 61.295339687;
    printf("u=%.7lf\n", u);
    //%.7lf for printing a double with floating point precision of 7
    return 0;
}
