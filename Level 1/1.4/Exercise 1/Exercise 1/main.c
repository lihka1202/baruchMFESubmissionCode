//
//  main.c
//  Exercise 1
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
        // Check if its a space
        if (text == ' ') {
            count_of_characters += 1;
            
            // Check if this space is at the end of a word by checking if you were in the word earlier
            if (inside_word==1) {
                // Make sure to increment the word and set inside_word to false
                count_of_words += 1;
                inside_word = 0;
            }
        } else if (text == '\n') {
            count_of_lines += 1;
            
            // check if this was inside a word right before this
            if (inside_word==1) {
                count_of_words += 1;
                inside_word = 0;
            }
            
        } else {
            // inside the word as of now, just increment character count
            count_of_characters += 1;
            inside_word = 1;
        }
    }
    
    // input suddenly ends, handle by incrementing the number of words
    if (inside_word==1) {
        count_of_words += 1;
        // Since you end on the line as well, increment that
        count_of_lines += 1;
    }
    
    // print it all out
    
    printf("\nCharacters: %d\n", count_of_characters);
    printf("Words: %d\n", count_of_words);
    printf("Lines: %d\n", count_of_lines);
    return 0;
}
