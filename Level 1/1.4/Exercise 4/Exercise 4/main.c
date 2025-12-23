//
//  main.c
//  Exercise 4
//
//  Created by Akhil Muthya Narayanachary on 19/8/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float farenheight = 0;
    printf("Farenheit\tCelsius\n");
    while (farenheight <= 300) {
        printf("%f\t%10.1f\n", farenheight, (5.0/9.0) * (farenheight - 32.0));
        farenheight += 20;
    }
}
