/*
CH-230-A
a8_p6.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double d1, d2;
    //the reading files 
    char name1[100], name2[100];
    FILE *input1;
    FILE *input2;
    //reading first name of the file
    fgets( name1, 100, stdin);
    //getting rid of the enter
    *(name1 + (strlen(name1) - 1) ) = '\0';

    input1 = fopen(name1, "r");
    if( input1 == NULL ) 
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    fgets( name2, 100, stdin);
    //getting rid of the enter
    *(name2 + (strlen(name2) - 1) ) = '\0';

    input2 = fopen(name2, "r");
    if( input2 == NULL ) 
    {
        printf("Cannot open file!\n");
        exit(2);
    }
    //reading the two doubles
    fscanf(input1, "%lf", &d1);
    fscanf(input2, "%lf", &d2);
    //closing files
    fclose( input1 );
    fclose( input2 );   
    //the writing file
    FILE *output;
    output = fopen("results.txt", "w");
    if( output == NULL ) 
    {
        printf("Cannot open file!\n");
        exit(3);
    }
    //printing all results
    fprintf(output, "sum = %lf\n", d1 + d2 );
    fprintf(output, "difference = %lf\n", d1 - d2 );
    fprintf(output, "product = %lf\n", d1 * d2 );
    fprintf(output, "division = %lf\n", d1 / d2 );
    fclose( output );
    return 0;
}