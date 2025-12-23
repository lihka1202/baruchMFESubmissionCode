//
//  main.c
//  Exercise 5
//
//  Created by Akhil Muthya Narayanachary on 19/8/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("Celsius\tFarenheit\n");
    for (float celsius = 0; celsius < 20; celsius += 1) {
        printf("%f\t%.1f\n", celsius, ((9.0/5.0) * celsius) + 32.0);
    }
}
