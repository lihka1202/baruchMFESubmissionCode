//
//  main.c
//  Exercise 3
//
//  Created by Akhil Muthya Narayanachary on 19/8/25.
//

#include <stdio.h>

// Here are some assumptions that I'm stating ahead of time:
// A space is counted as one character
// I don't account for special characters as delimiters for word count, ie I'm is 1 word. The only delimiter for word count is the number of spaces.
// A space is still a character, so multiple spaces is multiple extra characters



int main(int argc, const char * argv[]) {
    int text;
    int count_of_characters = 0, count_of_words = 0, count_of_lines = 0;
    int inside_word = 0;
    while ((text = getchar()) != EOF) {
        
        switch (text) {
            case ' ':
                count_of_characters += 1;
                switch (inside_word) {
                    case 1:
                        count_of_words += 1;
                        inside_word = 0;
                        break;
                    default:
                        break;
                }
                break;
            case '\n':
                count_of_lines += 1;
                switch (inside_word) {
                    case 1:
                        count_of_words += 1;
                        inside_word = 0;
                        break;
                        
                    default:
                        break;
                }
            default:
                count_of_characters += 1;
                inside_word = 1;
                break;
        }
    }
    
    switch (inside_word) {
        case 1:
            count_of_words += 1;
            count_of_lines += 1;
            break;
            
        default:
            break;
    }
    
    // print it all out
    
    printf("\nCharacters: %d\n", count_of_characters);
    printf("Words: %d\n", count_of_words);
    printf("Lines: %d\n", count_of_lines);
    return 0;
}
