//
//  main.c
//  Exercise 7
//
//  Created by Akhil Muthya Narayanachary on 20/8/25.
//

#include <stdio.h>

// This was run on macos, this works when I hit Ctrl + D
void print_count_of_three(int count) {
    switch (count) {
        case 0:
            printf("Number three appears %s times.\n", "zero");
            break;
        case 1:
            printf("Number three appears %s time.\n", "one");
            break;
        case 2:
            printf("Number three appears %s times.\n", "two");
            break;
        default:
            printf("The number three appears more than two times.\n");
            break;
    }
}

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
//    printf("This is the count of numbers (3): %d\n", counter[3]);
    print_count_of_three(counter[3]);
    printf("This is the count of numbers (4): %d\n", counter[4]);
    printf("This is the count of other characters: %d\n", count_of_other_characters);
    
    return 0;
}
