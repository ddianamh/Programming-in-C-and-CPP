//
//  main.c
//  a1_p3
//
//  Created by Diana H on 10.09.2022.
//
/*
 CH-230-A
 a1_p3.c
 Diana Harambas
 d.harambas@jacobs-university.de
 */
#include <stdio.h>
// i need a # before include
int main() {
float result;
    // i want a float result so i should divide two float variables
    //i have to modift the type of a and b from int to float
float a = 5;
float b = 13.5;
result = a / b;
printf("The result is %f\n", result); return 0;
    //Format specifies type 'int' because %d means printing
    //something integral in decimal base
    //but the argument result has type 'float'
    //for float i should use %f
}
