/*
CH-230-A
a4_p4.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int is_letter( char x )
{
    //checking if x is a letter from a to z
    //or a letter from A to Z
    //if yes, return 1
    //else, return 0
    if( (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') )
        return 1;
    else
        return 0;
}

int count_consonants(char str[])
{
    char vowels[20];
    //copying vowels in the vowels string
    strcpy(vowels, "AEIOUaeiou");
    int consonants = 0, length;
    length = strlen(str);
    for( int i = 0; i < length; i++ )
    {
        //checks if str[i] is a letter (not a space or other character) 
        //AND
        //checks if str[i] is NOT in the vowels string -> it's a consonant
        if( is_letter( str[i] ) == 1  && strchr( vowels, str[i] ) == NULL ) 
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
            printf("Number of consonants=%d\n", count_consonants( str ) );
        else
            break;
    }
    return 0;

}