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
        for( int j = 1; j <= m+i-1; j++ )
        {
            printf("%c", c); 
            //printing one row with m+i-1 chars
            //the 1st row ... m+1-1=m chars
            //the last row ... m+n-1 chars
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
    scanf("%d\n", &m); 
    //skipping the enter 
    scanf("%c", &c);
    print_form(n, m, c);
    return 0;
}