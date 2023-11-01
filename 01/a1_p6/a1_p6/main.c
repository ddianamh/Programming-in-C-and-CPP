//
//  main.c
//  a1_p6
//
//  Created by Diana H on 10.09.2022.
//
/*
 CH-230-A
 a1_p6.c
 Diana Harambas
 dharambas@jacobs-university.de
 */

#include <stdio.h>

int main() {
    char c;
    c = 'F';
    //by c+3 we get the third next character to c
    //to print it as a char we use %c and as integer ASCII code with %d 
    printf(" character %c\n ASCII code %d\n ", c+3, c+3);
    return 0;
}
