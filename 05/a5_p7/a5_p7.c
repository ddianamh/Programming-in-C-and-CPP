/*
CH-230-A
a5_p7.c 
Diana Harambas
dharambas@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
 #include <string.h>
int main()
{
    char str1[100], str2[100];
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    int len1, len2;
    len1 = strlen( str1 );
    len2 = strlen( str2 );
    //fgets keeps enter char as well, so we must shorten the strings
    str1[len1 - 1] = '\0';
    len1--; 
    str2[len2 - 1] = '\0';
    len2--;
    
    char *result;
    //dynamically allocating memory for result
    result = (char *) malloc( sizeof(char) * (len1 + len2) );
    int i = 0;

    //could use strcat() for concatenation
    //but i wanted to try work with string positions for practice

    //adding the first string
    while( i < len1 )
    {
        *( result + i ) = str1[i];
        i++;
    }
    //adding the second string
    i = 0;
    while( i < len2 )
    {
        *( result + len1 + i ) = str2[i];
        i++;
    }
    //adding the end string character on the last position
    *(result + len1 + len2 ) = '\0';
    
    printf("Result of concatenation: %s\n", result);

    //deallocating
    free( result );
    return 0;
}