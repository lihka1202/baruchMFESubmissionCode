//
//  main.c
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 20/10/25.
//

#include <stdio.h>

/**
 Check to see if the program is being run on unix based systems or not, since unix based systems may have terminals set in canonical mode or raw mode.
 Want to ensure that in this case, where Ctrl-A and Enter are meant to be distinguished.
 */
#if defined(__unix__) || defined(__APPLE__)
    #include <termios.h>
    #include <unistd.h>
    void enableRawMode() {
        struct termios t;
        tcgetattr(STDIN_FILENO, &t);
        t.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &t);
    }
    void disableRawMode() {
        struct termios t;
        tcgetattr(STDIN_FILENO, &t);
        t.c_lflag |= (ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &t);
    }
#else
    void enableRawMode() {}
    void disableRawMode() {}
#endif

// function to add to the buffer
int addToBuffer(char c, char* buffer, int pos) {
    buffer[pos++] = c;
    buffer[pos] = '\0';
    return pos;
}

// function to empty the buffer, dont need pos here since we search for null terminator
int emptyAndPrintFromBuffer(char* buffer){
    printf("\nPrinted Line: ");
    for (int i = 0; buffer[i]!='\0'; i+=1) {
        printf("%c",buffer[i]);
    }
    // Add a new line here after the buffer is printed
    printf("\n");
    
    // truly empty the buffer
    buffer[0] = '\0';
    return 0;
}


int main(int argc, const char * argv[]) {
    enableRawMode();
    char* buffer;
    int pos = 0;
    int holder;
    while ((holder = getchar()) != 1) {
        if (holder=='\n') {
            // If we see a new line, make sure that we empty buffer + print
            pos = emptyAndPrintFromBuffer(buffer);
        } else {
            pos = addToBuffer(holder, buffer, pos);
        }
    }
    
    // Remove and print from buffer, if Ctrl-A is called in the middle
    emptyAndPrintFromBuffer(buffer);
    
    printf("\nCTRL + A is a correct ending.\n");
    disableRawMode();
    return 0;
}
