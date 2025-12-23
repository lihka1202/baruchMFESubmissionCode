//
//  main.c
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 15/9/25.
//


// This demonstrates swapping using pointers, pref to not use temp variables. Using bitwise is a great way to save space and learn more about it as well
#include <stdio.h>
void Swap(int *i, int *j) {
    // I can use bitwise, a ^ b ^ b = a
//    i, j = &j, &i;
//    *i, *j = *j, *i;
    *i = *i ^ *j;
    *j = *i ^ *j;
    *i = *i ^ *j;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int i = 2;
    int j = 3;
    
    //Before swap this would normally be 2 and 3
    Swap(&i, &j);
    printf("i = %d\nj = %d\n", i, j);
    return 0;
}
