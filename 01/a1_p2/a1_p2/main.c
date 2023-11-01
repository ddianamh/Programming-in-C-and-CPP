//
//  main.c
//  a1_p2
//
//  Created by Diana H on 06.09.2022.
//

#include <stdio.h>

int main() {
    int result;
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result);
    //The result is a bad one (in my case 16220) because in the printing
    //function, we specify the decimal base in which we want to print the
    //integer, but we don't specify the what variable we want printed, which
    //is result. So, we need to add result in printf().
    return 0;
}
