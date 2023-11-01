/*
CH-230-A
a4_p4.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int count_consonants(char str[])
{
    char vowels[20];
    vowels = "AEIOUaeiou";
    int consonants = 0, length;
    length = strlen(str);
    for( int i = 0; i < length; i++ )
    {
        //checks if str[i] is a letter (not a space or other character) 
        //AND
        //checks if str[i] is NOT in the vowels string -> it's a consonant
        if( isalpha(str[i])  && strchr( vowels, str[i] ) == NULL ) 
            consonants++;
    }
    return consonants;

}

int main()
{
    char str[101];
    while( fgets(str, 100, stdin) ) 
    {
        //if the string does not start with enter 
        //(which means that the string is just '\n')
        //then print number of consonants 
        //and else, break the while() reading loop
        if( str[0] != '\n' )
            printf("Number of consonants=%d\n", consonants( str ) );
        else
            break;
    }
    return 0;

}