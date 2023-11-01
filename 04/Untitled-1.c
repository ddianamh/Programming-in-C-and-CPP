/*
CH-230-A
a4_p7.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

void printing_matrix( int a[31][], int n)
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
        printf("/n");
    }
}

void under_main_diagonal( int a[31][], int n )
{
    printf("Under the main diagonal:\n");
    //main diagonal -> all a[i][i], so row number = column number

    //under main diagonal -> the column number is strictly less 
    //than the row number -> so all a[i][j] with j < i

    for( int i = 1; i <= n; i++ )
    {
        // j < i so the next for() goes from 1 to i-1 
        for( int j = 1; j < i; j++ )
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
    under_main_diagonal(a, n);
    return 0;
}