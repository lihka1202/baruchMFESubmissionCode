//
//  main.c
//  Exercise 2
//
//  Created by Akhil Muthya Narayanachary on 20/8/25.
//

#include <stdio.h>

int factorial(int n) {
//    (n == 1) ? return n : return n * factorial(n-1);
    return n==1 ? n : n * factorial(n-1);
}

int main(int argc, const char * argv[]) {
    int n;
    printf("Please enter the number: ");
    scanf("%d", &n);
    printf("This is the factorial: %d\n", factorial(n));
    return 0;
}
