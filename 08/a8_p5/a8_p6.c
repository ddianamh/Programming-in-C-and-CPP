/*
CH-230-A
a8_p6.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
# include <stdlib.h>

int main()
{
    char c1, c2;
    //the reading files 
    FILE *input1;
    FILE *input2;
    input1 = fopen("file1.txt", "r");
    input2 = fopen("file2.txt", "r");
    if( inputfile == NULL ) 
    {
        printf("Cannot open file!\n");
        exit(1);
    }
    //reading the first two characters
    c1 = getc( inputfile );
    c2 = getc( inputfile );
    //closing file
    fclose( inputfile );

    //the writing file
    FILE *outputfile;
    outputfile = fopen("codesum.txt", "w");
    if( outputfile == NULL ) 
    {
        printf("Cannot open file!\n");
        exit(1);
    }
    //printing the sum 
    fprintf( outputfile, "%d", (int) c1 + (int) c2 );
    //closing file
    fclose( outputfile );
    return 0;
}