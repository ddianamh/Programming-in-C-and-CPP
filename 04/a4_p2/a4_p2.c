#include <string.h>

int main()
{
    char s[51];
    fgets(s, 51, stdin);
    int len;
    len = strlen(s) - 1;
    s[len] = '\0';
    //because it also reads the enter and we want to end the string earlier
    for( int i = 0; i < len; i++ )
    {
        if( i % 2 == 0 )
            printf("%c\n", s[i]);
        else
            printf(" %c\n", s[i]);
        //must include a space before the char if position is odd
    }
    return 0;
}