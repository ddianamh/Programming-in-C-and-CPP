/*
CH-230-A
a6_p3.c  
Diana Harambas
dharambas@jacobs-university.de
*/

#include <stdio.h>
//MIN
//case A<B -> check A<C then A is min, else C is min
//case not A<B (that means B<=A) -> check B<C then B is min, else C is min
#define MIN (A,B,C) ( ((A)<(B)) ? ((A)<(C) ? (A):(C)) : ((B)<(C) ? (B):(C)) )
//MAX
//case A>B -> check A>C then A is max, else C is max
//case not A>B (that means B>=A) -> check B>C then B is max, else C is max
#define MAX (A,B,C) ( ((A)>(B)) ? ((A)>(C) ? (A):(B)) : ((B)>(C) ? (B):(C)) )
//using the mid_range formula
#define MID_RANGE (A,B,C) ( (MIN(A,B,C) + MAX(A,B,C)) / 2 )
int main()
{
    int a, b, c;
    //reading
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("The mid-range is: %d\n", MID_RANGE(a,b,c) );
    return 0;
}