/*
CH-230-A
a2_p2.c
Diana Harambas
dharambas@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    // print as char with %c, as decimal with %d
    // as hexadecimal with %x, as octal with %o
    printf("character=%c\ndecimal=%d\noctal=%o\nhexadecimal=%x\n",c, c, c, c);
    return 0;
}