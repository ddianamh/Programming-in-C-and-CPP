/*
CH-230-A
a3_p2.c 
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char ch;
    int n;
    scanf("%c",&ch);
    scanf("%d", &n);
    //we start from i=0 because we need to print ch as well
    for( int i = 0; i <= n; i++ )
    {
        printf("%c\n", ch-i);
    }
    return 0;
}