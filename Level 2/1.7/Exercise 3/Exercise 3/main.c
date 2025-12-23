#include <stdio.h>

#define PRD(a) printf("%d", (a))   // Print decimal
#define NL printf("\n")            // Print new line

// Create and initialize array
int a[] = {0, 1, 2, 3, 4};

int main() {
    int i;
    int* p;

    // Print using array indexing
    for (i = 0; i <= 4; i++)
        PRD(a[i]); //1 -> This will print: 01234
    NL;

    // Print using pointer increment
    for (p = &a[0]; p <= &a[4]; p++)
        PRD(*p); //2 -> This will print: 01234
    NL;
    NL;

    // Print using pointer with index
    for (p = &a[0], i = 0; i <= 4; i++)
        PRD(p[i]); //3 -> This will print: 01234
    NL;

    // Print using pointer arithmetic
    for (p = a, i = 0; p + i <= a + 4; p++, i++)
        PRD(*(p + i)); //4 -> This will print: 024
    NL;
    NL;

    // Print array in reverse using pointer decrement
    for (p = a + 4; p >= a; p--)
        PRD(*p); //5 -> This will print: 43210
    NL;

    // Print array in reverse using negative index
    for (p = a + 4, i = 0; i <= 4; i++)
        PRD(p[-i]); //6 -> This will print: 43210
    NL;

    // Print array in reverse using offset calculation
    for (p = a + 4; p >= a; p--)
        PRD(a[p - a]); //7 -> This will print: 43210
    NL;

    return 0;
}
