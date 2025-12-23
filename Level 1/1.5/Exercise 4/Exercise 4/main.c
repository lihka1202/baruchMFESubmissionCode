//
//  main.c
//  Exercise 4
//
//  Created by Akhil Muthya Narayanachary on 30/8/25.
//

#include <stdio.h>

void printnumber(int number) {
    // when the sign is not defined
    if (number < 0) {
        putchar('-');
        number = -number;
    }
    
    if (number >= 10) {
        printnumber(number/10);
    }
    putchar(number%10 + '0');
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printnumber(123);
    printnumber(-456);
    return 0;
}
