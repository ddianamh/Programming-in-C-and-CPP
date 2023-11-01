/*
CH-230-A
a4_p6.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
void two_greatest( int a[], int n)
{
    int max1, max2;
    //initializing max1,2 with the minimal values
    //so that we make sure they are modified
    max1 = INT_MIN; 
    max2 = INT_MIN;
    //i want max1 > max2 
    //if there are 2 elements with the same maximal value,
    //only keep the value once
    for( int i = 1; i <= n; i++ )
    {
        if( a[i] > max1 )
        {
            max2 = max1;
            //moving the current max1 into max2 to save the big value
            //putting current value in max1 to store current maximum
            max1 = a[i];
        }
        else
        {
            //this means a[i] <= max1
            if( a[i] != max1 && a[i] > max2 )
            {
                max2 = a[i];
                //will not save a[i] into max2 if a[i]==max1
            }
        }
    }
    if( max2 != INT_MIN )
    {
        printf("The greatest value is %d\n", max1);
        printf("The second greatest value is %d\n", max2);
    }
    else
    {
        if( n == 1 )
        {
            //i did not know if valid input means n>1 (it would make sense)
            //so i also took this corner case, since it's not 'harmful' =))
            printf("The greatest value is %d\n", max1);
            printf("No second greatest value (only one element in array)\n");
        }
        else
        {
            //this is the case where there are more elem in the array
            //but max2 is not updated because all values are equal to max1
            printf("The greatest value is %d\n", max1);
            printf("The second greatest value is also %d\n", max1);
            printf("(all elements are equal)\n");

        }
    }

}

int main()
{
    int *dyn_array;
    int n;
    scanf("%d", &n);
    //using malloc() for dynamic allocation
    dyn_array = (int*) malloc(sizeof(int) * n);
    
    for( int i = 1; i <= n; i++ )
    {
        scanf("%d", &dyn_array[i]);
        //reading the i'th element
    }

    //calling function
    two_greatest( dyn_array, n);

    //deallocating with free()
    free( dyn_array );
    return 0;
}