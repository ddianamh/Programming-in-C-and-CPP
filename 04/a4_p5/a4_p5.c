/*
CH-230-A
a4_p5.c 
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
    if( ( x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') )
        return 1;
    else
        return 0;
}

int count_consonants(char str[])
{
    char vowels[20];
    //copying vowels in the vowels string
    strcpy(vowels, "AEIOUaeiou");
    int consonants = 0;
    char *ptr; 
    //loop starts from position 0 of str[] and ends at the end of the string
    for( ptr = str; *ptr != '\0'; ptr++)
    {
        //checks if the value *ptr on current position
        //is a letter (not a space or other character) 
        //AND
        //checks if *ptr is NOT in the vowels string -> it's a consonant
        if( is_letter( *ptr ) == 1  && strchr( vowels, *ptr ) == NULL ) 
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