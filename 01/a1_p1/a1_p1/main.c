//
//  main.c
//  a1_p1
//

#include <stdio.h>
int main() {
double result;
    /* The result of our calculation*/
    double a, b, c;
    a = 3;
    b = 1;
    c = 5;
    result = (a + b) / c;
    
    //another method
    // result = (3.0 + 1.0) / 5.0;
    
    /*
     Initially, the result was 0.000 because 3, 1 and 5 are integers and whenever the program sees a division between integers, it must return an integer (4/5 = 0 if you only work with int). Therefore, we must change the type of the numbers so that they can be read as double's (add .0 to them or store them in double variables a, b, c). As double/double = double, in result we'll obtain what we wanted, which is 0.800000.
     */
printf("The value of 4/5 is %lf\n", result); return 0;
}
