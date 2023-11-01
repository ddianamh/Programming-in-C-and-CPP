/*
CH-230-A
a5_p9.c 
Diana Harambas
dharambas@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

void reading(int ***a, int n, int m, int p)
{
    int i, j, k;
    for (i = 0; i < p; i++)
        for (j = 0; j < n; j++)
            for (k = 0; k < m; k++)
                scanf("%d", &a[i][j][k]);
    //function that reads the elements of the matrix
}

void printing(int ***a, int n, int m, int p)
{
    int i, j, k;
    for (k = 0; k < m; k++)
    {
        printf("Section %d:\n", k + 1);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < p; j++)
                printf("%d ", a[i][j][k]);
            printf("\n");
        }
    }
    //function that prints the sections
}


int main()
{
    int r, c, d;
    scanf("%d", &r);
    scanf("%d", &c);
    scanf("%d", &d);

    int ***A;
    
    //allocating A
    A = (int ***) malloc(sizeof(int **) * r);
    if (A == NULL)
        exit(1);
    for (int i = 0; i < r; i++) 
    {
        A[i] = (int **) malloc(sizeof(int *) * c); 
        if (A[i] == NULL)
            exit(1);
        for (int j = 0; j < c; j++) 
        {
            A[i][j] = (int *) malloc(sizeof(int ) * d); 
            if (A[i][j] == NULL)
                exit(1);
        }
    }
    reading( A, r, c, d);
    //printing A
    
    printing( A, r, c, d);

    for(int i = 0; i < r; i++) 
    {
        {
            for( int j = 0; j < c; j++)
                free(A[i][j]);
        }
        free(A[i]);
    }
    free(A);

    return 0;
}