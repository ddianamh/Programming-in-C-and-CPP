/*
CH-230-A
a3_p11.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h> 
#include <string.h>
int main()
{
    char one[101], two[101], c;
    char *position;
    int length1, length2;
    //1

    // reading the first string
    fgets(one, sizeof(one), stdin); 
    //fgets adds the enter at the end
    //so the string should end one position earlier
    //the we need to add \0 to that position
    one[strlen(one) - 1] = '\0';
    //getting the length of one
    length1 = strlen(one);

    //reading the second string
    fgets(two, sizeof(two), stdin); 
    //same as for one
    two[strlen(two) - 1] = '\0';
    //getting the length of two
    length2 = strlen(two); 

    //printing the lengths
    printf("length1=%d\n", length1);
    printf("length2=%d\n", length2);


    //2

    char concat[202];
    //copying one int concat so that we can add two 
    //right after one, i.e. concatenating them
    //and saving the concatenation in concat
    strcpy(concat, one);
    strcat(concat, two);
    //printing the concatenation
    printf("concatenation=%s\n", concat);


    //3

    char three[101];
    //copying two into three
    strcpy(three, two);
    //printing the copy of two
    printf("copy=%s\n", three); 

    
    //4

    //comparing the strings
    if (strcmp(two, one) < 0) 
        printf("one is larger than two\n");
    else
    {
        if (strcmp(two, one) > 0)
            printf("one is smaller than two\n");
        else

            printf("one is equal to two\n");
    }


    //5

    //reading c
    scanf("%c", &c);
    //searching for c in the two
    if (strchr(two, c) != NULL) 
    {
        //if c is found
        //getting the position and printing it
        position = strchr(two, c);
        printf("position=%ld\n", position - two);
    }
    else
    {
        //here is when c is not found
        printf("The character is not in the string\n");
    }
    return 0;
}
