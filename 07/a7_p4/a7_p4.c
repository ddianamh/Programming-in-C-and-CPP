/*
CH-230-A
a7_p4.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>   
#include <ctype.h>

void print_lower( char *str )
{
    int i = 0;
    //changing all to lower
    while( *(str + i) )
    {
        printf("%c", tolower(*(str+i)));
        i++;
    }
    printf("\n");

}

void print_upper( char *str )
{
    int i = 0;
    //changing all to upper
    while( *(str + i) )
    {
        printf("%c", toupper(*(str+i)));
        i++;
    }
    printf("\n");
}

void lower_upper(char *str )
{
    int i = 0;
    //changing lower to upper and viceversa
    while( *(str + i) )
    {
        if( 'a' <= *(str + i) && *(str + i) <= 'z')
            printf("%c", toupper(*(str+i)));
        else
            printf("%c", tolower(*(str+i)));
        i++;
    }
    printf("\n");
}

void end( char *str )
{
    //deallocating the string memory
    free( str );
    //exiting program
    exit(2);
}

int main()
{
    char *str;
    //assumption: max length of string is 50
    str = (char *) malloc(sizeof( char ) * 50);
    if( str == NULL )
        exit(1);
    fgets( str, 50, stdin);
    //fgets also stores enter so we eliminate it
    int len;
    len = strlen( str );
    *(str + len - 1 ) = '\0';

    char x;
    //defining the array of function pointers
    void (*fptr[4])(char *str);
    fptr[0] = print_upper;
    fptr[1] = print_lower;
    fptr[2] = lower_upper;
    fptr[3] = end;
    //print_upper on position 0 in the array
    //print_lower on position 1 in the array
    //lower_upper on position 2 in the array
    //end on position 3 in the array

    //infinite loop
    while( 1 )
    {
        //reading every x
        scanf("%c", &x);
        getchar();
        int number;
        //transforming the char number into its value in decimals
        //by subtracting char '0' 
        number = ((int) x ) - '0';
        //calling the function based on the position and read value:
        (*fptr[ number-1 ])( str );
    }
    return 0;
}