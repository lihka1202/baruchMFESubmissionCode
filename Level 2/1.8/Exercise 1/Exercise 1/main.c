//
//  main.c
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 20/10/25.
//
// Creating a structure and printing it.

#include <stdio.h>

struct Article {
    int articleNumber;
    int quantity;
    char description[20];
};

void Print(struct Article *a) {
    printf("Article Number: %d\n", a->articleNumber);
    printf("Quantity: %d\n", a->quantity);
    printf("Description: %s\n", a->description);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    // create the structure
    struct Article item = {101, 5, "Pen"};
    
    // print this
    Print(&item);
    return 0;
}
