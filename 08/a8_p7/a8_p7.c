/*
CH-230-A
a8_p7.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char content;
    FILE *input1;
    FILE *input2;
    //opening first file 
    input1 = fopen("text1.txt", "r");
    if( input1 == NULL ) 
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    //opening second file 
    input2 = fopen("text2.txt", "r");
    if( input2 == NULL ) 
    {
        printf("Cannot open file!\n");
        exit(2);
    }

    //output file
    FILE *output;
    output = fopen("merge12.txt", "w");
    if( output == NULL ) 
    {
        printf("Cannot open file!\n");
        exit(3);
    }
    
    //reading from the first file
    //infinite loop
    while( 1 )
    {
        //reading character by character
        content = fgetc( input1 );
        //loop breaks when EOF is found in the file
        if( content == EOF )
            break;
        //printing current character in the output file 
        fprintf( output, "%c", content );
    }

    //reading from the second file

    while( 1 )
    {
        //reading character by character
        content = fgetc( input2 );
        //loop breaks when EOF is found in the file
        if( content == EOF )
            break;
        //printing current character in the output file 
        fprintf( output, "%c", content );
    }

    //closing all files
    fclose(input1);
    fclose(input2);
    fclose(output);
    return 0;
}
