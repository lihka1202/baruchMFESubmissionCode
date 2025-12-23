#include <stdio.h>
#include <string.h>

#if defined(__unix__) || defined(__APPLE__)
  #include <termios.h>
  #include <unistd.h>
  void enableRawMode() {
      struct termios t;
      tcgetattr(STDIN_FILENO, &t);
      t.c_lflag &= ~(ICANON | ECHO);
      t.c_cc[VMIN]  = 1;
      t.c_cc[VTIME] = 0;
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

// Append a char to the buffer
int addToBuffer(char c, char* buffer, int pos, int cap) {
    if (pos < cap - 1) {
        buffer[pos++] = c;
        buffer[pos]   = '\0';
    }
    return pos;
}

// Write the current buffer as one line to 'out', then clear it.
void flushLineToFile(char* buffer, FILE* out) {
    if (out) {
        fprintf(out, "%s\n", buffer);
        fflush(out);
    }
    buffer[0] = '\0';
}

// Create file if missing (optional helper)
void checkFileExistence(const char* name) {
    FILE *file = fopen(name, "r");
    if (file == NULL) {
        file = fopen(name, "w");
        if (file) fclose(file);
        return;
    }
    fclose(file);
}

int main(void) {
    // 1) Get the output file name BEFORE enabling raw mode
    char filename[256];
    printf("Please enter name of file to divert output to: ");
    if (!fgets(filename, sizeof filename, stdin)) {
        // fallback if read fails
        strcpy(filename, "output.txt");
    }
    filename[strcspn(filename, "\n")] = '\0';
    if (filename[0] == '\0') {
        strcpy(filename, "output.txt");
    }

    // Make sure the file exists
    checkFileExistence(filename);
    FILE* out = fopen(filename, "a");
    if (!out) {
        perror("Cannot open output file");
        return 1;
    }

    // 2) Now go raw and read keys
    enableRawMode();

    // Fixed-size line buffer
    char buffer[1024] = {0};
    int  pos = 0;
    int  holder;

    while ((holder = getchar()) != 1 && holder != EOF) { // Ctrl-A is 1
        if (holder == '\n' || holder == '\r') {
            flushLineToFile(buffer, out);
            pos = 0;
        } else {
            pos = addToBuffer((char)holder, buffer, pos, (int)sizeof buffer);
        }
    }

    // Flush if Ctrl-A is pressed midline
    if (buffer[0] != '\0') {
        flushLineToFile(buffer, out);
    }

    disableRawMode();
    fclose(out);

    printf("\nCTRL + A is a correct ending.\n");
    return 0;
}
