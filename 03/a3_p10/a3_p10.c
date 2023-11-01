/*
CH-230-A
a3_p10.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h> 

float product( float a, float b )
{
    float p;
    p = a*b;
    //calculating the product
    return p;
}

void productbyref( float a, float b, float *p )
{
    float prod;
    prod = a*b;
    p = &prod;
    printf("Product using the second function: %f\n", *p);
    //also printing the val of the product
}

void modifybyref(float *a, float *b)
{
    *a += 3;  
    *b += 11; 
    //adding 3 and 11 using pointers
}

int main()
{
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);  
    float *ptr_a, *ptr_b;
    ptr_a = &a; 
    ptr_b = &b;
    //the pointers for a and b
    printf("Product using the first function: %f\n", product(a, b));
    //calling the first function
    float *p = &a; 
    //initializing p with whatever
    //as we will print its modified value withing the function
    productbyref(a, b, p);    
    //calling the second function with pointer p
    modifybyref(ptr_a, ptr_b); 
    //calling the third function
    printf("a after being modified :%f\n", *ptr_a);
    printf("b after being modified :%f\n", *ptr_b);
    //printed the new a and b changed through the pointers

    return 0;
}