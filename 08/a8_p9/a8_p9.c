/*
CH-230-A
a8_p9.[c or cpp or h] 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    getchar();

    FILE *output;
    output = fopen("output.txt", "wb");
    if( output == NULL )
    {
        printf("Cannot open file!\n");
        exit(1);
    }

    //writing all the stuff from the beginning

    const char endl = '\n';
    const char number = n + '0';
    const char beginning[]="Concating the content of ";
    const char beginning2[]=" files ...\nThe result is:\n";

    fwrite( beginning, strlen(beginning), 1, output );
    fwrite( &number , 1, 1, output );
    fwrite( beginning2, strlen(beginning2), 1, output );
    char name[100];

    //reading from the files

    for( i = 1; i <= n; i++ )
    {
        fgets( name, 100, stdin);
        //getting rid of the enter
        *(name + (strlen(name) - 1) ) = '\0';
        
        FILE *input;
        //opening input file
        input = fopen(name, "rb");

        if( input == NULL ) 
        {
            printf("Cannot open file!\n");
            exit(2);
        }
        
        char buffer[64];
        fread(buffer, sizeof(char), 64, input); 
        fwrite(buffer, strlen(buffer), 1, output);
        //writing enter
        fwrite( &endl, 1, 1, output );
        //closing current input
        fclose(input);
    }

    //writing the ending part
    const char ending[]="The result was written into output.txt";
    fwrite( ending, strlen(ending), 1, output );
    //closing output
    fclose(output);

    return 0;
}
