/*
CH-230-A
a5_p3.c 
Diana Harambas
dharambas@jacobs-university.de
 */
#include <stdio.h>
#include <string.h>
int count_lower( char *str )
{
    int c;
    c = 0;
    //loop stops when string ends
    while( *str != '\0'  )
    {
        //checks if the char on the current position is lower letter
        if( *str >= 'a' && *str <= 'z' )
            c++;
        str++;
    }
    return c;
}

int main()
{
    int c;
    char str[50];
    fgets( str, 50, stdin );
    //loop ends when the string starts with '\n'
    while( str[0] != '\n')
    {
        c = count_lower( str );
        //printing the string (contains the enter char at the end)
        //then prints the number of lowercase characters
        printf( "%s%d lowercase characters\n", str, c);
        //reads new string
        fgets( str, 50, stdin );
    }
    return 0;
}