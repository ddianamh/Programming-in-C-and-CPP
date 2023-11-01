//
//  main.c
//  a1_p4
//
//  Created by Diana H on 10.09.2022.
//
/*
CH-230-A
a1_p4.c
Diana Harambas
d.harambas@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int x, y, sum, product, difference, remainder;
    // x, y need to be integers in order for the
    //remainder of division to exist
    double division;
    x = 17;
    y = 4;
    //we use %d for all apart from division because they are integers
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    sum = x + y;
    printf("sum=%d\n", sum);
    product = x * y;
    printf("product=%d\n", product);
    difference = x - y;
    printf("difference=%d\n", difference);
    //division is double so i must transform
    //x and y within the operation
    division = (double) x / (double) y;
    printf("division=%lf\n", division);
    remainder = x % y;
    printf("remainder of division=%d\n", remainder);
    
    
    return 0;
}
