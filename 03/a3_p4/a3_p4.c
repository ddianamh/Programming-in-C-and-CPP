/*
CH-230-A
a3_p4.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
int position(char str[], char c)
{
    int idx = 0;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
        if( str[idx+1] == c )
        {
            return idx+1;
            //checks if next value = c, returns idx+1 if yes
        }
    return idx; 
    //this is the case where c is on position 0
    //the for won't do anything because its condition is False
    //so idx stays 0

}
int main() {
    char line[80];
    while (1) 
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    } 
    return 0;
    //there was no return 0;
}