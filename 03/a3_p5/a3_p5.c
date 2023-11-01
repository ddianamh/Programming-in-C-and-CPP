/*
CH-230-A
a3_p5.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

int main() 
{
    char c;
    int n;
    double temp[100];
    scanf("%c", &c);
    scanf("%d", &n);
    double sum, avg, ftemp[100];
    sum = 0;
    avg = 0;
    for( int i = 0; i < n; i++ )
    {
        scanf("%lf", &temp[i]);
        //reading the array of temperatures
        sum = sum + temp[i];
        //already calculating the sum by adding each value to 'sum'
        ftemp[i] = 9 * temp[i] / 5 + 32;
        //calculating temp[i] in Fahrenheit & storing it in the ftemp[] array
    }
    avg = sum / n;
    // calculating the average

    switch (c) 
    {
        case 's': //printing sum
            printf("%lf\n", sum);
            break; 
        case 'p': //printing the array
            for( int i = 0; i < n; i++ )
                printf("%lf ", temp[i]);
            printf("\n");
            break;
        case 't':
            for( int i = 0; i < n; i++ ) //printing the Fahrenheit array
                printf("%lf ", ftemp[i]);
            printf("\n");
            break;
        default: //printing average for all other cases
            printf("%lf\n", avg);
    }
    return 0;
}