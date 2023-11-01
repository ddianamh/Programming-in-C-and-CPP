/*
CH-230-A
a5_p1.c 
Diana Harambas
dharambas@jacobs-university.de
 */
#include <stdio.h>

void triangle(int n, char ch)
{
    for( int i = 1; i <= n; i++ )
    {
        for( int j = 1 + n - i; j >= 1; j-- )
        {
            printf("%c", ch);
            //starting for i=1, j=n -> base of the triangle
            //ending for i=n, j=1 -> vertex of the triangle
        }
        printf("\n");
        //new row
    }
}

int main()
{
    int n;
    char ch;
    scanf("%d", &n);
    //skipping enter
    getchar();
    scanf("%c", &ch);
    triangle(n, ch);
    return 0;
}