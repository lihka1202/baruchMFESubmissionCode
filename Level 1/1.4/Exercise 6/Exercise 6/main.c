//
//  main.c
//  Exercise 6
//
//  Created by Akhil Muthya Narayanachary on 20/8/25.
//

#include <stdio.h>

// This was run on macos, this works when I hit Ctrl + D

int main(int argc, const char * argv[]) {
    int input;
//    int count_of_numbers = 0;
    int counter[] = {0,0,0,0,0};
    int count_of_other_characters = 0;
    while ((input = getchar()) != EOF) {
        switch (input) {
            case '0':
                counter[0] += 1;
                break;
            case '1':
                counter[1] += 1;
                break;
            case '2':
                counter[2] += 1;
                break;
            case '3':
                counter[3] += 1;
                break;
            case '4':
                counter[4] += 1;
                break;
                
            default:
                count_of_other_characters += 1;
        }
    }
    
    printf("This is the count of numbers (0): %d\n", counter[0]);
    printf("This is the count of numbers (1): %d\n", counter[1]);
    printf("This is the count of numbers (2): %d\n", counter[2]);
    printf("This is the count of numbers (3): %d\n", counter[3]);
    printf("This is the count of numbers (4): %d\n", counter[4]);
    printf("This is the count of other characters: %d\n", count_of_other_characters);
    
    return 0;
}
