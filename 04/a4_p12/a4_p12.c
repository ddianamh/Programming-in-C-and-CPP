/*
CH-230-A
a4_p12.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void replaceAll( char *str, char c, char e )
{
    //while current value of str is not the end of the string
    //goes from position to the next and replaces char c with char e
    while( *str != '\0' )
    {
        if( *str == c )
            *str = e;
        str++;
    }
}

int main()
{
    //dynamically allocating the string with max length 80
    char *str, c, e;
    str = (char*) malloc (sizeof(char) * 80);
    fgets(str, 80, stdin);
    int length;
    length = strlen( str );

    //getting rid of the enter that fgets() reads within the string
    *(str + length - 1) = '\0';

    //loop until the string is "stop"
    while( strcmp( str, "stop" ) != 0 )
    {
        //reading and printing the characters
        scanf("%c", &c);
        //skipping the enter
        getchar();
        scanf("%c", &e);
        printf("character to be replaced: %c\n", c);
        printf("character to be replaced: %c\n", e);

        //printing initial string
        printf("modified string: %s\n", str);

        //calling the function
        replaceAll(str, c, e);

        //printing modified string
        printf("modified string: %s\n", str);

        //rereading the string, must skip an enter
        getchar();
        fgets(str, 80, stdin);
        length = strlen( str );
        *(str + length - 1) = '\0';
    }

    //deallocating
    free( str );
    return 0;
}