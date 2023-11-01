/*
CH-230-A
a8_p8.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];
    fgets( name, 100, stdin);
    //getting rid of the enter
    *(name + (strlen(name) - 1) ) = '\0';

    FILE *input;
    //opening input file
    input = fopen(name, "r");
    if( input == NULL ) 
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    //string of characters that separate words
    char sep[] = {' ', ',', '.', '?', '!', '\t', '\r', '\n' };

    int number = 0;
    int not_separator = 0;
    char content;

    //reading 
    //infinite loop
    while( 1 )
    {
        //reading character by character
        content = fgetc( input );
        //loop breaks when EOF is found in the file
        if( content == EOF )
            break;

        if( strchr( sep, content) == NULL )
        {
            //if the char is not in the separators string
            //then it means that it is part of a word
            //so we set to change not_separator to 1
            if( not_separator == 0 )
            {
                //if it was 0, then it means that this is the start
                //of a new word
                //so we increase the number of words
                number++;
                not_separator = 1;
            }
            //else, not_separator is already 1, so we are somewhere
            //in the word
        } 
        else
        {
            //if the character is a separator then not_separator must be 0
            not_separator = 0;
        }
    
    }
    //closing input
    fclose(input);

    if( number == 1 )
    {
        printf("The file contains 1 word.\n");
    }
    else
    {
        printf("The file contains %d words.\n", number);
    }

    return 0;
}
