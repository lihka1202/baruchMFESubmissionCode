//
//  main.c
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 20/8/25.
//

#include <stdio.h>

int minus(int a, int b) {
    return a-b;
}

int main(int argc, const char * argv[]) {
    int a, b;
    printf("Please enter the first number: ");
    scanf("%d", &a);
    printf("Please enter the second number: ");
    scanf("%d", &b);
    printf("The difference is %d\n", minus(a,b));
    return 0;
}
