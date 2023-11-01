/*
CH-230-A
a2_p9.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
 
int main()
{
    char c;
    scanf("%c", &c);
    //we look at the ASCII table
    //digits have ASCII code from 48 to 57
    if( 48 <= (int)c && (int)c < 58 )
    {
        printf("%c is a digit\n", c);
    }
    else
    {
        //capital letters go from code 65 to 90
        //small letters go from ASCII code 97 to 122
        if( (65 <= (int)c && (int)c <= 90) || (97 <= (int)c && (int)c <= 122) )
            printf("%c is a letter\n", c);
        else
            printf("%c is some other symbol\n", c);
        //other symbols are the rest of ASCII codes, not lettters or digits
    }

    return 0;
}