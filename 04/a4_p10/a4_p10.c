/*
CH-230-A
a4_p10.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

//idk how to indent this to look good and keep it <80 chars????

void proddivpowinv (float a, float b, float *prod, 
                    float *div, float *pwr, float *invb)
{
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    //used the math.h function pow()
    *invb= 1.0 / b;
    //divided the float 1.0 to b
}

int main()
{
    float a, b, prod, div, pwr, invb;
    scanf("%f", &a);
    scanf("%f", &b);
    //calling the function (passing bu reference)
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("product=%f\n", prod);
    printf("division=%f\n", div);
    printf("power=%f\n", pwr);
    printf("inverse=%f\n", invb);
    return 0;
}