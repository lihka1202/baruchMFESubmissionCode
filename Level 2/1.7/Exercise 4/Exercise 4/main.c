//
//  main.c
//  Exercise 4
//
//  Created by Akhil Muthya Narayanachary on 20/10/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char* dayHolder[] = {"Sunday","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int day;
    printf("Please enter the day of the week: ");
    scanf("%d", &day);
    printf("The day that you have selected is this: %s\n", dayHolder[day-1]);
    
}
