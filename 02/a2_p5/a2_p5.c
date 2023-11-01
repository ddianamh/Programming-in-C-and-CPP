/*
CH-230-A
a2_p5.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int a;
    //reading and printing
    scanf("%d", &a);
    printf("value:%d\n", a);
    //the pointer
    int *ptr_a;
    ptr_a = &a;
    printf("address:%p\n", ptr_a);
    //increasing the value
    *ptr_a = *ptr_a + 5;
    printf("modified value:%d\naddress:%p\n", a, &a);
    return 0;
}