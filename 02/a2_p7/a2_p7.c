/*
CH-230-A
a2_p7.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    int i = 8;
    while (i >= 4)
    {
        printf("i is %d\n", i);
        i--;
    }
    //we need {} for the while because initially
    //in the loop there was just the printing, so
    //i didn't change at all (i-- was outside the loop)
    //so the condition i>=4 was always true  
    //when we add {} we put both the printing and the 
    //i--; into the while loop 
    printf("That’s it.\n");
    return 0;
}