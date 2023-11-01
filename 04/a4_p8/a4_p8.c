/*
CH-230-A
a4_p8.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

void printing_matrix( int a[][31], int n)
{
    printf("The entered matrix is:\n");
    for( int i = 1; i <=  n; i++ )
    {
        for( int j = 1; j <= n; j++ )
        {
            printf("%d ", a[i][j]);
        }
        //printed row i
        //need an enter because we reached the end of the row
        printf("\n");
    }
}

void under_secondary_diagonal( int a[][31], int n )
{
    printf("Under the secondary diagonal:\n");
    //secondary diagonal -> all a[i][n+1-i]

    //under secondary diagonal 
    //-> the column number is strictly greater than n+1-i
    //when the row number is i

    for( int i = 1; i <= n; i++ )
    {
        // j goes from n+1-i+1 to n
        for( int j = n+2-i; j <= n; j++ )
        {
            printf("%d ", a[i][j]);
        }
    }
    printf("\n");
} 

int main()
{
    int n, a[31][31], x;
    scanf("%d", &n);
    for( int i = 1; i <= n; i++ )
    {
        // i is the row number
        for( int j = 1; j <= n; j++ )
        {
            // j is the column number
            scanf("%d", &x);
            a[i][j] = x;
            //putting the current value on row i column j
        }
    }
    printing_matrix(a, n);
    under_secondary_diagonal(a, n);
    return 0;
}