/*
CH-230-A
a2_p1.c 
Diana Harambas
dharambas@jacobs-university.de
*/
#include  <stdio.h>
#include <string.h>

int main()
{
    //initializing variables
    double a, b, sumd, diffd, sqa;
    int m, n, sumi, prodi;
    char c, d;
    //starting with the doubles, %lf
    //for the integers, %d
    //for the characters, %c -- here i must also use getchar() 
    //to skip the empty spaces/enters in the input 
    scanf("%lf", &a );
    scanf("%lf", &b );
    scanf("%d", &m );
    scanf("%d", &n );
    getchar();
    scanf("%c", &c);
    getchar();
    scanf("%c", &d);

    // for the doubles
    sumd = a + b;
    diffd = a - b;
    sqa = a * a;
    printf("sum of doubles=%lf\ndifference of doubles=%lf\nsquare=%lf\n", sumd, diffd, sqa);

    // for the integers   
     sumi = m + n;
    prodi = m * n;
    printf("sum of integers=%d\nproduct of integers=%d\n", sumi, prodi);
    
     // for the chars   
    //to print as decimal values i use %d, for printing as char's i use %c
    printf("sum of chars=%d\nproduct of chars=%d\n", c + d, c * d);
    printf("sum of chars=%c\nproduct of chars=%c\n", c + d, c * d);
    return 0;
}