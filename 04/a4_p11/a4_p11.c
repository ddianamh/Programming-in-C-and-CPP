/*
CH-230-A
a4_p11.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_insensitive(char *str, char c)
{
    int count = 0;
    //while current value of str is not the end of the string
    //goes from position to the next
    while( *str != '\0' )
    {
        //checks if c is 'insensitively' at the current position
        if( tolower(*str) == c || toupper(*str) == c )
            count++;
        str++;
    }
    return count;
}

int main()
{
    //dynamically allocating the string with max length 50
    char *str;
    str = (char*) malloc (sizeof(char) * 50);
    fgets(str, 50, stdin);
    //getting the actual length
    int length;
    length = strlen( str );
    //making a copy with the correct length
    char *copy;
    copy = (char*) malloc (sizeof(char) * length);
    strcpy( copy, str );
    //deallocating the memory occupied by str
    free(str);
    //testing the function for 'b','H','8','u','$'
    printf("The character %c occurs %d times.\n", 'b', count_insensitive(copy, 'b'));
    printf("The character %c occurs %d times.\n", 'H', count_insensitive(copy, 'H'));
    printf("The character %c occurs %d times.\n", '8', count_insensitive(copy, '8'));
    printf("The character %c occurs %d times.\n", 'u', count_insensitive(copy, 'u'));
    printf("The character %c occurs %d times.\n", '$', count_insensitive(copy, '$'));
    //deallocating the memory occupied by copy
    free(copy);
    return 0;
}