/*
CH-230-A
a5_p8.c 
Diana Harambas
dharambas@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, p;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    int **A, **B, **C;
    //allocating A
    A = (int **) malloc(sizeof(int *) * n);
    if (A == NULL)
        exit(1);
    for (int i = 0; i < n; i++) 
    {
        A[i] = (int *) malloc(sizeof(int) * m); 
        if (A[i] == NULL)
            exit(1);
    }
    //reading A
    for (int i = 0; i < n; i++) 
    {
        for( int j = 0; j < m; j++ )
            scanf("%d", &A[i][j]);
    }
    //printing A
    printf("Matrix A:\n");
    for (int i = 0; i < n; i++) 
    {
        for( int j = 0; j < m; j++ )
            printf("%d ", A[i][j]);
        printf("\n");
    }

    //allocating B
    B = (int **) malloc(sizeof(int *) * m);
    if (B == NULL)
        exit(1);
    for (int i = 0; i < m; i++) 
    {
        B[i] = (int *) malloc(sizeof(int) * p); 
        if (B[i] == NULL)
            exit(1); 
    }
    //reading B
    for (int i = 0; i < m; i++) 
    {
        for( int j = 0; j < p; j++ )
            scanf("%d", &B[i][j]);
    }
    //printing B
    printf("Matrix B:\n");
     for (int i = 0; i < m; i++) 
    {
        for( int j = 0; j < p; j++ )
            printf("%d ", B[i][j]);
        printf("\n");
    }

    //allocating C
    C = (int **) malloc(sizeof(int *) * p);
    if (C == NULL)
        exit(1);
    for (int i = 0; i < n; i++) 
    {
        C[i] = (int *) malloc(sizeof(int) * p); 
        if (C[i] == NULL)
            exit(1);
        for( int k = 0; k < p; k++)
        {
            C[i][k] = 0;
            for( int j = 0; j < m; j++)
            {
                //doing the multiplication formula, 
                //adding current multiplication
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }

    printf("The multiplication result AxB:\n");
    for (int i = 0; i < n; i++) 
    {
        for( int j = 0; j < p; j++ )
            printf("%d ", C[i][j]);
        printf("\n");
    }

    //deallocating
    for(int i = 0; i < n; i++) 
    {
        free(A[i]);
    }
    free(A);

    for(int i = 0; i < m; i++) 
    {
        free(B[i]);
    }
    free(B);

    for(int i = 0; i < n; i++) 
    {
        free(C[i]);
    }
    free(C);

    return 0;
}