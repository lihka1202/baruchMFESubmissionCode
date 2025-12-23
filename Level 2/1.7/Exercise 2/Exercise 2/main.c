/* Calculate the length of a string */
#include <stdio.h>

#define MAXLINE 30

// String length declaration
int Length(char str[]);

int main(void) {
    char string[MAXLINE + 1]; // Line of maximum 30 chars + \0
    int c;                    // The input character
    int i = 0;                // The counter

    // Print intro text
    printf("Type up to %d chars. Exit with ^Z (or Ctrl+D on Unix)\n", MAXLINE);

    // Get the characters
    while ((c = getchar()) != EOF && i < MAXLINE) {
        // Append entered character to string
        string[i++] = (char)c;
    }
    string[i] = '\0'; // String must be closed with \0

    printf("\nString length is %d\n", Length(string));
    return 0;
}

/* Implement the Length() function here */
int Length(char str[]) {
    int len = 0;
    
    // Check until the null terminator is seen, then break
    while (str[len] != '\0') {
        len += 1;
    }
    return len;
}
