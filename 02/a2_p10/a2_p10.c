/*
CH-230-A
a2_p10.c 
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // re-read until i get a good non zero positive int n
    while ( n <= 0 )
    {
        scanf("%d", &n);
    }
    
    int i = 1; 
    //this is the variable that helps us go from 1 to n
    // x days ... 24x hours

    while( i <= n )
    {
        //separate case, for the singular 'day'
        if( i == 1 )
        {
            printf("%d day = %d hours \n", i, 24*i);
        }   
        else
        {
            printf("%d days = %d hours \n", i, 24*i);
        }
        //case for i>=2, where 'days' is plural
        //need to increase i after every step
        i++;
    }
    return 0;
}