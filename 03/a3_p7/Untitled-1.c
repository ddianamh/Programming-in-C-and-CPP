/*
CH-230-A
a3_p7.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

void print_form(int n, int m, char c)
{
    for( int i = 1; i <= n; i++ )
    {
        for( int j = m; j <= m+n-1; m++ )
        {
            printf("%c", c); 
            //printing one row
        }
        printf("\n");
        //ending the row
    }
}
int main()
{
    int n, m;
    char c;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%c", &c);
    print_form(n, m, c);
    return 0;
}